/***********************************************************/
/* Title       : ADC peripheral program file		      */
/* Author      : Yahia Ahmed                             */
/* Release     : 1.0                                    */
/* Last Update : Aug 23, 2021                          */
/******************************************************/
#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#include "ADC_int.h"
#include "ADC_config.h"
#include "ADC_priv.h"


#ifndef ADC_PROG_H_
#define ADC_PROG_H_

void ADC_vidInit(void)
{
	/*******************Select the voltage reference***************/
	ADCMUX&= ADC_u8_VOLT_REF_CLEAR_MASK;
	ADCMUX|= ADC_u8_VOLTAGE_REF_MODE;
	///////////////////////////////////////////////////////////////

	/*******************Select The ADC MODE***********************/
	#if	ADC_u8_MODE ==ADC_u8_MODE_AUTO_TRIGGER
		SET_BIT(ADCSRA,5);
	#elif ADC_u8_MODE == ADC_u8_MODE_SINGLE_CONVERSION
		CLEAR_BIT(ADCSRA,5);
		SFIOR&= ADC_AUTO_TRIGGER_SRC_CLR_MASK; 
		SFIOR|= ADC_u8_TRIG_SCOURCE;
	#endif
	ADCSRA|=ADC_u8_MODE<<5;
	///////////////////////////////////////////////////////////////

	
	/***********************Select Adjustment**********************/
	#if ADC_u8_ADJUSMENT == ADC_u8_RIGHT_ADJUSTMENT
		CLEAR_BIT(ADCMUX,5);
		
	#elif ADC_u8_ADJUSMENT == ADC_u8_LEFT_ADJUSTMENT
		SET_BIT(ADCMUX,5);
	#endif
	/////////////////////////////////////////////////////////////////
	/**********************CLR Interrupt Flag***************************/
	SET_BIT(ADCSRA,4);
	/////////////////////////////////////////////////////////////////
	/**********************Enable ADC***************************/
	SET_BIT(ADCSRA,7);
	////////////////////////////////////////////////////////////	
}
void ADC_vidStartConversion(ADC_ChannelSelect ADC_CopyChannelNo)
{
	/***************Select ADC channel***************/
	ADCMUX&=0b11100000;
	ADCMUX|=ADC_CopyChannelNo;
	/////////////////////////////////////////////////
	/***************Start Conversion***************/
	SET_BIT(ADCSRA,6);
}
u16 ADC_GetResult(void)
{
	u16 Local_u16Result;
	if( ADC_u8_ADJUSMENT == ADC_u8_RIGHT_ADJUSTMENT)
	{
		while(GET_BIT(ADCSRA,6));
		Local_u16Result = ADC_DataReg;
	}
	else if(( ADC_u8_ADJUSMENT == ADC_u8_LEFT_ADJUSTMENT))
	{
		while(GET_BIT(ADCSRA,6)==1);
		Local_u16Result = ADC_DataReg>>6;
	}
	return Local_u16Result;
}
#endif /* ADC_PROG_H_*/
