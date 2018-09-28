#ifndef __DEFINENAMI_HEADER__
#define __DEFINENAMI_HEADER__


//reg define
//#define DEBUG_LED_1	PORTE.PODR.BIT.B1	
#define DEBUG_LED_2	PORTE.PODR.BIT.B4	
#define DEBUG_LED_3	PORTE.PODR.BIT.B5	

#define LED_1		PORT5.PODR.BIT.B4	
#define LED_2		PORT5.PODR.BIT.B5

#define LED_7SEG_1	PORT1.PODR.BIT.B4	
#define LED_7SEG_2	PORT1.PODR.BIT.B5	
#define LED_7SEG_3	PORT1.PODR.BIT.B6	
#define LED_7SEG_4	PORT1.PODR.BIT.B7	
#define LED_7SEG_5	PORT2.PODR.BIT.B7	
#define LED_7SEG_6	PORT3.PODR.BIT.B1	
#define LED_7SEG_7	PORT3.PODR.BIT.B2	

#define LF_SEN_LED	PORTH.PODR.BIT.B0
#define LS_SEN_LED	PORTH.PODR.BIT.B1
#define RS_SEN_LED	PORTH.PODR.BIT.B2
#define RF_SEN_LED	PORTH.PODR.BIT.B3

#define MOT_R_IN1	PORTB.PODR.BIT.B0
#define MOT_R_IN2	PORTB.PODR.BIT.B1
#define MOT_L_IN1	PORTB.PODR.BIT.B5
#define MOT_L_IN2	PORTB.PODR.BIT.B6
#define MOT_STBY	PORTB.PODR.BIT.B7



//others
#define CHIP_LED_ON		0
#define CHIP_LED_OFF		1

#define SEN_LED_ON		1
#define SEN_LED_OFF		0

#endif

