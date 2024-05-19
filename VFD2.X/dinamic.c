#include "mcc_generated_files/mcc.h"
#include "dinamic.h"

uint8_t seg_data[6] = {0, 0, 0, 0, 0, 0};
uint8_t period_flags = 0b000000;
uint8_t th = 0;

void seg_off()
{
    LATA = LATA & DINAMIC_LATA_SEG_MASK; 
    LATB = LATB & DINAMIC_LATB_SEG_MASK;
}

void col_show(uint8_t data, bool period)
{   
    const uint8_t pattern1[11] = {
        0b00001111,// 0
        0b00000001,// 1
        0b00010110,// 2
        0b00010011,// 3
        0b01011001,// 4
        0b00011011,// 5
        0b00011111,// 6
        0b00001001,// 7
        0b00011111,// 8
        0b00011011,// 9
        0b00000000
    };
    const uint8_t pattern2[11] = {
        0b00000011,// 0
        0b00000010,// 1
        0b00000011,// 2
        0b00000011,// 3
        0b00000010,// 4
        0b00000001,// 5
        0b00000001,// 6
        0b00000011,// 7
        0b00000011,// 8
        0b00000011,// 9
        0b00000000
    };
    
    LATA = (LATA & DINAMIC_LATA_SEG_MASK) | (pattern1[data] | (period ? 0b00100000 : 0));
    LATB = (LATB & DINAMIC_LATB_SEG_MASK) | pattern2[data];
}

void dinamic()
{
    static uint8_t dimmer_count = 0;
    if(dimmer_count >= th)
    {
        static uint8_t col_counter = 0;
        if(th == 0) seg_off();
        switch (col_counter)
        {
            case 0:
                Col_5_LAT = 0;
                Col_0_LAT = 1;
                col_show(seg_data[col_counter] ? seg_data[col_counter] : DINAMIC_COL_OFF, period_flags & 0b00000001);
                col_counter++;
                break;
            case 1:
                Col_0_LAT = 0;
                Col_1_LAT = 1;
                col_show(seg_data[col_counter], period_flags & 0b00000010);
                col_counter++;
                break;
            case 2:
                Col_1_LAT = 0;
                Col_2_LAT = 1;
                col_show(seg_data[col_counter], period_flags & 0b00000100);
                col_counter++;
                break;
            case 3:
                Col_2_LAT = 0;
                Col_3_LAT = 1;
                col_show(seg_data[col_counter], period_flags & 0b00001000);
                col_counter++;
                break;
            case 4:
                Col_3_LAT = 0;
                Col_4_LAT = 1;
                col_show(seg_data[col_counter], period_flags & 0b00010000);
                col_counter++;
                break;
            case 5:
                Col_4_LAT = 0;
                Col_5_LAT = 1;
                col_show(seg_data[col_counter], period_flags & 0b00100000);
                col_counter = 0;
                break;
        }
        
        dimmer_count = 0;
    }
    else
    {
        seg_off();
        dimmer_count++;
    }
    
}

void Init_VFD()
{
    TMR0_SetInterruptHandler(dinamic);
}

void Set_VFD(uint8_t d[6], uint8_t flags)
{
    seg_data[0] = d[0];
    seg_data[1] = d[1];
    seg_data[2] = d[2];
    seg_data[3] = d[3];
    seg_data[4] = d[4];
    seg_data[5] = d[5];
    period_flags = flags;
}

void Set_Dimmer(uint8_t d)
{
    th = d;
}