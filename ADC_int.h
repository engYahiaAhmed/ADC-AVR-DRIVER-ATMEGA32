/**********************************************************/
/* Title       : ADC peripheral interface file			 */
/* Author      : Yahia Ahmed                            */
/* Release     : 1.0                                   */
/* Last Update : Aug 23, 2021                         */
/*****************************************************/
#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_
typedef enum{
	ADC_Channel_0,
	ADC_Channel_1,
	ADC_Channel_2,
	ADC_Channel_3,
	ADC_Channel_4,
	ADC_Channel_5,
	ADC_Channel_6,
	ADC_Channel_7,
}ADC_ChannelSelect;
void ADC_vidInit(void);
void ADC_vidStartConversion(ADC_ChannelSelect ADC_CopyChannelNo);
u16 ADC_GetResult(void);  

#endif /* ADC_INTERFACE_H_*/
