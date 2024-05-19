#include "mcc_generated_files/mcc.h"
#include "dinamic.h"
#include "RX8900.h"

// VFD表示更新フラグ
bool FLAG_NEW = false;
// ボタン立ち下がり検出フラグ
bool FLAG_BTN = false;
// アラーム時間表示フラグ
bool FLAG_SHOW_ALARM = false;

// VFD表示更新
void time_new()
{
    FLAG_NEW = true;
}

// アラーム設定時の表示時間カウント(500ms/1カウント)
void show_counter()
{
    static uint8_t count = 0;
    if(count == 7)
    {
        FLAG_SHOW_ALARM = false;
        TMR1_StopTimer();
        count = 0;
    }
    else
    {
        count++;
    }
}

// アラーム
void alarm(bool set)
{
    NCO1CONbits.EN = set;
    NCO2CONbits.EN = set;
    NCO3CONbits.EN = set;
}



void main(void)
{
    SYSTEM_Initialize();

    PIE0bits.IOCIE = 0; 
    INTERRUPT_GlobalInterruptHighEnable();
    INTERRUPT_GlobalInterruptLowEnable();
    
    __delay_ms(30);
    
    // WWDT
    WWDT_SoftEnable();
    
    // 初期化
    Init_RX8900();
    Init_VFD();
    
    IOCCF6_SetInterruptHandler(time_new);
    TMR1_SetInterruptHandler(show_counter);
    
    PIE0bits.IOCIE = 1; 
    
    // vfd表示バッファ
    uint8_t d[6] = {8,8,8,8,8,8};
    // 全点灯
    Set_VFD(d, 0b111111);
    
    // ピリオド表示位置
    uint8_t period = 0b000000;
    // 時間
    bcdtime_t time = ReadBCDTime_RX8900();
    // timeのコピー。時刻設定用
    bcdtime_t wr_time_buf = time;
    // アラーム時刻
    bcdtime_t alarm_time = ReadBCDAlarmTime_RX8900();
    
    // timer_swのエッジ検出用
    bool last_timer_sw_state = false;
    bool now_timer_sw_state = !SW_Timer_PORT;
    
    while (1)
    {
        // VFD表示
        if(FLAG_NEW)
        {
            // アラーム時刻表示
            if(FLAG_SHOW_ALARM)
            {
                period = RTC_1Hz_PORT ? 0b001010 : 0;
                d[5] = DINAMIC_COL_OFF;
                d[4] = DINAMIC_COL_OFF;
                d[3] = alarm_time.min & 0x0F;
                d[2] = (alarm_time.min & 0xF0) >> 4;
                d[1] = alarm_time.hour & 0x0F;
                d[0] = (alarm_time.hour & 0xF0) >> 4;
            }
            // 時刻表示
            else
            {
                time = ReadBCDTime_RX8900();
                wr_time_buf = time;
                period = 0b000000;
                
                d[5] = time.sec & 0x0F;
                d[4] = (time.sec & 0xF0) >> 4;
                d[3] = time.min & 0x0F;
                d[2] = (time.min & 0xF0) >> 4;
                d[1] = time.hour & 0x0F;
                d[0] = (time.hour & 0xF0) >> 4;
            }
            
            Set_VFD(d, period);
            FLAG_NEW = false;
        }
        
        // timer_swのエッジ検出用
        now_timer_sw_state = !SW_Timer_PORT;
        
        // timer_swがオンの時の処理
        if(now_timer_sw_state == true)
        {
            // timer_sw立ち上がり
            if(last_timer_sw_state == false)
            {
                TMR1_StartTimer();
                TMR1_WriteTimer(0);
                FLAG_NEW = true;
                FLAG_SHOW_ALARM = true; 
            }
            
            // アラーム
            if(alarm_time.hour == time.hour && alarm_time.min == time.min &&
                                alarm_time.sec == time.sec && !FLAG_SHOW_ALARM)
            {
                alarm(true);
            }
            
            // アラーム設定
            if(BTN_Reset_PORT == 0 && FLAG_BTN == 0)
            {
                TMR1_StartTimer();
                TMR1_WriteTimer(0);
                FLAG_NEW = true;
                FLAG_BTN = true;
                FLAG_SHOW_ALARM = true;
            }
            else if(BTN_Minute_PORT == 0 && FLAG_BTN == 0)
            {
                uint8_t chage_buf;
                
                TMR1_StartTimer();
                TMR1_WriteTimer(0);
                FLAG_NEW = true;
                FLAG_BTN = true;
                FLAG_SHOW_ALARM = true;
                
                chage_buf = Change_BCD_to_BIN(alarm_time.min);
                if(chage_buf >= 59) chage_buf = 0;
                else chage_buf++;
                alarm_time.min = Change_BIN_to_BCD(chage_buf);
                WriteBCDAlarmTime_RX8900(alarm_time);
            }
            else if(BTN_Hour_PORT == 0 && FLAG_BTN == 0)
            {
                uint8_t chage_buf;
                
                TMR1_StartTimer();
                TMR1_WriteTimer(0);
                FLAG_NEW = true;
                FLAG_BTN = true;
                FLAG_SHOW_ALARM = true;
                
                chage_buf = Change_BCD_to_BIN(alarm_time.hour);
                if(chage_buf >= 23) chage_buf = 0;
                else chage_buf++;
                alarm_time.hour = Change_BIN_to_BCD(chage_buf);
                WriteBCDAlarmTime_RX8900(alarm_time);
            }

            if(BTN_Reset_PORT && BTN_Minute_PORT && BTN_Hour_PORT)
                FLAG_BTN = false;
        }
        
        // timer_swがオフの時の処理
        else
        {
            // アラーム解除
            if(last_timer_sw_state == true)
            {
                alarm(false);
            }
            
            // 時刻設定
            if(BTN_Reset_PORT == 0 && FLAG_BTN == 0)
            {
                FLAG_NEW = true;
                FLAG_BTN = true;
                wr_time_buf.sec = 0;
                WriteBCDTime_RX8900(wr_time_buf);
            }
            else if(BTN_Minute_PORT == 0 && FLAG_BTN == 0)
            {
                FLAG_NEW = true;
                FLAG_BTN = true;
                uint8_t chage_buf;
                chage_buf = Change_BCD_to_BIN(wr_time_buf.min);
                if(chage_buf >= 59) chage_buf = 0;
                else chage_buf++;
                wr_time_buf.min = Change_BIN_to_BCD(chage_buf);
                WriteBCDTime_RX8900(wr_time_buf);
            }
            else if(BTN_Hour_PORT == 0 && FLAG_BTN == 0)
            {
                FLAG_NEW = true;
                FLAG_BTN = true;
                uint8_t chage_buf;
                chage_buf = Change_BCD_to_BIN(wr_time_buf.hour);
                if(chage_buf >= 23) chage_buf = 0;
                else chage_buf++;
                wr_time_buf.hour = Change_BIN_to_BCD(chage_buf);
                WriteBCDTime_RX8900(wr_time_buf);
            }

            if(BTN_Reset_PORT && BTN_Minute_PORT && BTN_Hour_PORT)
                FLAG_BTN = false;
        }
        
        // 明るさ設定
        if(!SW_Dimmer_PORT && (time.hour <= Change_BIN_to_BCD(4)))
        {
            Set_Dimmer(4);
        }
        else if(!SW_Dimmer_PORT && (Change_BIN_to_BCD(22) <= time.hour ||
                                time.hour <= Change_BIN_to_BCD(5)))
        {
            Set_Dimmer(2);
        }
        else if(!SW_Dimmer_PORT && (Change_BIN_to_BCD(20) <= time.hour ||
                                time.hour <= Change_BIN_to_BCD(6)))
        {
            Set_Dimmer(1);
        }
        else
        {
            Set_Dimmer(0);
        }
        
        // timer_swのエッジ検出用
        last_timer_sw_state = now_timer_sw_state;
        
        WWDT_TimerClear();
    }
}
