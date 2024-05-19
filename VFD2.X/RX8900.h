#ifndef RX8900_H
#define	RX8900_H

#ifdef	__cplusplus
extern "C" {
#endif

    
typedef struct { uint8_t hour, min, sec; } bcdtime_t;
void Init_RX8900();
uint8_t Change_BIN_to_BCD(uint8_t bin);
uint8_t Change_BCD_to_BIN(uint8_t bcd);
void WriteBCDTime_RX8900(bcdtime_t time);
bcdtime_t ReadBCDTime_RX8900();
void WriteBCDAlarmTime_RX8900(bcdtime_t time);
bcdtime_t ReadBCDAlarmTime_RX8900();



#ifdef	__cplusplus
}
#endif

#endif