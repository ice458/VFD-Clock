#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/examples/i2c1_master_example.h"
#include "RX8900.h"

#define RX8900A_ADRS           0x32
#define SEC_reg                0x00
#define MIN_reg                0x01
#define HOUR_reg               0x02
#define WEEK_reg               0x03
#define DAY_reg                0x04
#define MONTH_reg              0x05
#define YEAR_reg               0x06
#define RAM_reg                0x07
#define MIN_Alarm_reg          0x08
#define HOUR_Alarm_reg         0x09
#define WEEK_DAY_Alarm_reg     0x0A
#define Timer_Counter_0_reg    0x0B
#define Timer_Counter_1_reg    0x0C
#define Extension_Register_reg 0x0D
#define Flag_Register_reg      0x0E
#define Control_Register_reg   0x0F
#define TEMP_reg               0x17
#define Backup_Function_reg    0x18
#define NO_WEEK 0x00
#define SUN 0x01
#define MON 0x02
#define TUE 0x04
#define WED 0x08
#define THU 0x10
#define FRI 0x20
#define SAT 0x40

void Init_RX8900()
{
    uint8_t flag;
    const bcdtime_t zero = {0, 0, 0};
    I2C1_Write1ByteRegister(RX8900A_ADRS, Extension_Register_reg, 0x08);
    I2C1_Write1ByteRegister(RX8900A_ADRS, Control_Register_reg, 0x40);
    
    flag = I2C1_Read1ByteRegister(RX8900A_ADRS, Flag_Register_reg);
    if((flag & 0x11) > 0)
    {
        WriteBCDTime_RX8900(zero);
        WriteBCDAlarmTime_RX8900(zero);
    }
    I2C1_Write1ByteRegister(RX8900A_ADRS, Flag_Register_reg, 0x00);
}

uint8_t Change_BIN_to_BCD(uint8_t bin)
{
    return (bin / 10 << 4) + (bin % 10);
}

uint8_t Change_BCD_to_BIN(uint8_t bcd)
{
    return ((bcd & 0xF0) >> 4) * 10 + (bcd & 0x0F);
}

void WriteBCDTime_RX8900(bcdtime_t time)
{
    I2C1_Write1ByteRegister(RX8900A_ADRS, SEC_reg, time.sec);
    I2C1_Write1ByteRegister(RX8900A_ADRS, MIN_reg, time.min);
    I2C1_Write1ByteRegister(RX8900A_ADRS, HOUR_reg, time.hour);
}

bcdtime_t ReadBCDTime_RX8900()
{
    bcdtime_t time;
    time.sec = I2C1_Read1ByteRegister(RX8900A_ADRS, SEC_reg);
    time.min = I2C1_Read1ByteRegister(RX8900A_ADRS, MIN_reg);
    time.hour = I2C1_Read1ByteRegister(RX8900A_ADRS, HOUR_reg);
    return time;
}

void WriteBCDAlarmTime_RX8900(bcdtime_t time)
{
    I2C1_Write1ByteRegister(RX8900A_ADRS, MIN_Alarm_reg, time.min);
    I2C1_Write1ByteRegister(RX8900A_ADRS, HOUR_Alarm_reg, time.hour);
}

bcdtime_t ReadBCDAlarmTime_RX8900()
{
    bcdtime_t time;
    time.min = I2C1_Read1ByteRegister(RX8900A_ADRS, MIN_Alarm_reg);
    time.hour = I2C1_Read1ByteRegister(RX8900A_ADRS, HOUR_Alarm_reg);
    time.sec = 0;
    return time;
}