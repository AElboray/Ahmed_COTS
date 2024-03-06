/**************************************************************/
/**************************************************************/
/*********		Author: Ahmed Elboray		*******************/
/*********		File: DCM_program.h			*******************/
/*********		Version: 1.00				*******************/
/**************************************************************/
/**************************************************************/

#include "STD_TYPES.h"

#include "DIO_interface.h"

#include "DCM_interface.h"

u8 DCM_u8CW(const DC_Motor_t* Copy_cfgDCMotor)
{
	u8 Local_u8ErrorState = OK;
	if(Copy_cfgDCMotor != NULL)
	{
		DIO_u8SetPinValue(Copy_cfgDCMotor->PORT,Copy_cfgDCMotor->Pin1,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(Copy_cfgDCMotor->PORT,Copy_cfgDCMotor->Pin2,DIO_u8PIN_HIGH);
	}
	else
	{
		Local_u8ErrorState = NULL_PTR_ERR;
	}
	return Local_u8ErrorState;
}

u8 DCM_u8CCW(const DC_Motor_t* Copy_cfgDCMotor)
{
	u8 Local_u8ErrorState = OK;
	if(Copy_cfgDCMotor != NULL)
	{
		DIO_u8SetPinValue(Copy_cfgDCMotor->PORT,Copy_cfgDCMotor->Pin2,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(Copy_cfgDCMotor->PORT,Copy_cfgDCMotor->Pin1,DIO_u8PIN_HIGH);
	}
	else
	{
		Local_u8ErrorState = NULL_PTR_ERR;
	}
	return Local_u8ErrorState;
}

u8 DCM_u8Stop(const DC_Motor_t* Copy_cfgDCMotor)
{
	u8 Local_u8ErrorState = OK;
	if(Copy_cfgDCMotor != NULL)
	{
		DIO_u8SetPinValue(Copy_cfgDCMotor->PORT,Copy_cfgDCMotor->Pin1,DIO_u8PIN_LOW);
		DIO_u8SetPinValue(Copy_cfgDCMotor->PORT,Copy_cfgDCMotor->Pin2,DIO_u8PIN_LOW);
	}
	else
	{
		Local_u8ErrorState = NULL_PTR_ERR;
	}
	return Local_u8ErrorState;
}
