/***********************************************************/
/* Title       : ADC peripheral Private file   			  */
/* Author      : Yahia Ahmed                             */
/* Release     : 1.0                                    */
/* Last Update : Aug 23, 2021                          */
/******************************************************/
#ifndef ADC_PRIV_H_
#define ADC_PRIV_H_

#define ADCMUX  		*((volatile u8*)0x27)
#define ADCSRA  		*((volatile u8*)0x26)
#define ADCL  			*((volatile u8*)0x24)
#define ADCH  			*((volatile u8*)0x25)
#define SFIOR  			*((volatile u8*)0x50)
#define ADC_DataReg     *((volatile u16*)0x24)

/*Voltage Reference Selection*/
#define ADC_u8_VOLT_REF_CLEAR_MASK        		0b00111111
#define ADC_u8_VOLT_REF_AREF      				0b00000000
#define ADC_u8_VOLT_REF_AVCC_WITHExCAPACITOR   	0b01000000
#define ADC_u8_VOLT_REF_INT_2_56 	     		0b11000000
/*ADC MODE Selection*/
#define ADC_u8_MODE_AUTO_TRIGGER				1
#define ADC_u8_MODE_SINGLE_CONVERSION	 		0

/*ADC PRESCALER SELECTION*/
#define ADC_PRESCALER_CLR_MASK 					0b11111000
#define ADC_PRESCALER_BY_2						0x0
#define ADC_PRESCALER_BY_4		 				0x2
#define ADC_PRESCALER_BY_8 						0x3
#define ADC_PRESCALER_BY_16						0x4
#define ADC_PRESCALER_BY_32						0x5
#define ADC_PRESCALER_BY_64						0x6
#define ADC_PRESCALER_BY_128					0x7

/*ADC Auto Trigger Source Selections*/
#define ADC_AUTO_TRIGGER_SRC_CLR_MASK 				0b00011111
#define ADC_AUTO_TRIGGER_SRC_FREE_RUNNING			0b00000000
#define ADC_AUTO_TRIGGER_SRC_ANALOG_COMPARATOR		0b00100000
#define ADC_AUTO_TRIGGER_SRC_EXI0					0b01000000
#define ADC_AUTO_TRIGGER_SRC_Timer0_COMP_Match		0b01100000
#define ADC_AUTO_TRIGGER_SRC_Timer0_OVERFLOW		0b10000000
#define ADC_AUTO_TRIGGER_SRC_Timer1_COMP_Match		0b10100000
#define ADC_AUTO_TRIGGER_SRC_Timer1_OVERFLOW 		0b11000000
#define ADC_AUTO_TRIGGER_SRC_Timer1_CAPTURE			0b11100000

/*ADC adjustment Selection*/
#define ADC_u8_LEFT_ADJUSTMENT						1
#define ADC_u8_RIGHT_ADJUSTMENT						0 


#endif /* ADC_PRIV_H_*/
