#ifndef DINAMIC_H
#define	DINAMIC_H

#ifdef	__cplusplus
extern "C" {
#endif

#define DINAMIC_LATA_SEG_MASK  0b10000000
#define DINAMIC_LATB_SEG_MASK  0b11111100
#define DINAMIC_COL_OFF 10
    
void Init_VFD();
void Set_VFD(uint8_t d[6], uint8_t flags);
void Set_Dimmer(uint8_t d);

#ifdef	__cplusplus
}
#endif

#endif