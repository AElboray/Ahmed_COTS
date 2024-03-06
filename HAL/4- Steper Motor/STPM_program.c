/**************************************************************/
/**************************************************************/
/*********		Author: Ahmed Elboray		*******************/
/*********		File: STPM_program.c		*******************/
/*********		Version: 1.00				*******************/
/**************************************************************/
/**************************************************************/

#include <util/delay.h>
#include "STD_TYPES.h"

#include "DIO_interface.h"

#include "STPM_interface.h"

u8 Stepper_u8Rotate(const Stepper_Motor_t* Copy_u16StepperMotor,u16 Copy_u16Angle,u8 Copy_u8Direction)
{
	u8 Local_u8ErrorState = -1;

	if(Copy_u16StepperMotor != NULL)
	{
		Local_u8ErrorState = 1;

		u16 Local_u16Counter;
		u16 Local_u16Steps;

		Local_u16Steps = (u16)((u32)Copy_u16Angle * 2048ul / 360ul);

		if(Copy_u8Direction == STEPPER_MOTOR_CW)
		{
			for(Local_u16Counter=0;Local_u16Counter<Local_u16Steps;Local_u16Counter++)
			{
				if((Local_u16Counter%4) == 0)
				{
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Pink_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Yellow_pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Orange_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Blue_Pin,DIO_u8PIN_LOW);
					_delay_ms(2);
				}
				else if((Local_u16Counter%4) == 1)
				{
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Blue_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Yellow_pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Orange_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Pink_Pin,DIO_u8PIN_LOW);
					_delay_ms(2);
				}
				else if((Local_u16Counter%4) == 2)
				{
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Blue_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Pink_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Orange_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Yellow_pin,DIO_u8PIN_LOW);
					_delay_ms(2);
				}
				else if((Local_u16Counter%4) == 3)
				{
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Blue_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Pink_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Yellow_pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Orange_Pin,DIO_u8PIN_LOW);
					_delay_ms(2);
				}
			}
		}
		else if(Copy_u8Direction == STEPPER_MOTOR_CCW)
		{
			for(Local_u16Counter=0;Local_u16Counter<Local_u16Steps;Local_u16Counter++)
			{
				if((Local_u16Counter%4) == 0)
				{
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Blue_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Pink_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Yellow_pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Orange_Pin,DIO_u8PIN_LOW);
					_delay_ms(2);
				}
				else if((Local_u16Counter%4) == 1)
				{
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Blue_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Pink_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Orange_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Yellow_pin,DIO_u8PIN_LOW);
					_delay_ms(2);
				}
				else if((Local_u16Counter%4) == 2)
				{
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Blue_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Yellow_pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Orange_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Pink_Pin,DIO_u8PIN_LOW);
					_delay_ms(2);
				}
				else if((Local_u16Counter%4) == 3)
				{
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Pink_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Yellow_pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Orange_Pin,DIO_u8PIN_HIGH);
					DIO_u8SetPinValue(Copy_u16StepperMotor->PORT,Copy_u16StepperMotor->Blue_Pin,DIO_u8PIN_LOW);
					_delay_ms(2);
				}
			}
		}
	}
	return Local_u8ErrorState;
}
