
/************************************************/
/* Title       : ADC configuration file			*/
/* Author      : Yahia Ahmed                    */
/* Release     : 1.0                            */
/* Last Update : Aug 23, 2021                   */
/************************************************/

#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_

#define ADC_u8_VOLT_REF_mv			5000
#define ADC_u8_Number_OF_STEPS		1024
////////////////////////////////////////////////////////////////////////
  /********Select the voltage reference*******
  *ADC_u8_VOLT_REF_AREF						 *
  *ADC_u8_VOLT_REF_AVCC_WITHExCAPACITOR		 *
  *ADC_u8_VOLT_REF_INT_2_56					 *
  *******************************************/
#define ADC_u8_VOLTAGE_REF_MODE		ADC_u8_VOLT_REF_AVCC_WITHExCAPACITOR
////////////////////////////////////////////////////////////////////////
  /*******Choose the ADC MODE*********
  *ADC_u8_MODE_AUTO_TRIGGER			 *
  *ADC_u8_MODE_SINGLE_CONVERSION	 *
  ***********************************/
#define	ADC_u8_MODE					ADC_u8_MODE_AUTO_TRIGGER
////////////////////////////////////////////////////////////////////////	
  /******ADC adjustment*******
  *ADC_u8_LEFT_ADJUSTMENT	 *
  *ADC_u8_RIGHT_ADJUSTMENT	 *
  ***************************/
#define ADC_u8_ADJUSMENT	ADC_u8_RIGHT_ADJUSTMENT
////////////////////////////////////////////////////////////////////////
  /*****ADC Prescaler*****
  *ADC_PRESCALER_BY_2	 *
  *ADC_PRESCALER_BY_4	 *
  *ADC_PRESCALER_BY_8	 *
  *ADC_PRESCALER_BY_16	 *
  *ADC_PRESCALER_BY_32	 *
  *ADC_PRESCALER_BY_64	 *
  *ADC_PRESCALER_BY_128	 *
  ***********************/
#define ADC_u8_PRESCALER	ADC_PRESCALER_BY_128
///////////////////////////////////////////////////////////////////////
  /********ADC trigger source*********************
  *ADC_AUTO_TRIGGER_SRC_FREE_RUNNING			 *
  *ADC_AUTO_TRIGGER_SRC_ANALOG_COMPARATOR		 *
  *ADC_AUTO_TRIGGER_SRC_EXI0					 *
  *ADC_AUTO_TRIGGER_SRC_Timer0_COMP_Match		 *
  *ADC_AUTO_TRIGGER_SRC_Timer0_OVERFLOW	       	 *
  *ADC_AUTO_TRIGGER_SRC_Timer1_COMP_Match 		 *	
  *ADC_AUTO_TRIGGER_SRC_Timer1_OVERFLOW 		 *
  *ADC_AUTO_TRIGGER_SRC_Timer1_CAPTURE			 *
  ***********************************************/
#define ADC_u8_TRIG_SCOURCE					AUTO_TRIGGER_SRC_FREE_RUNNING
/////////////////////////////////////////////////////////////////////////

#endif /* ADC_CONFIG_H_*/
