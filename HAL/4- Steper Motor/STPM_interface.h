/**************************************************************/
/**************************************************************/
/*********		Author: Ahmed Elboray		*******************/
/*********		File: STPM_interface.h		*******************/
/*********		Version: 1.00				*******************/
/**************************************************************/
/**************************************************************/

#ifndef STPM_INTERFACE_H_
#define STPM_INTERFACE_H_

#define STEPPER_MOTOR_CW		0u
#define STEPPER_MOTOR_CCW		1u


typedef struct{
	u8 PORT;
	u8 Blue_Pin;
	u8 Pink_Pin;
	u8 Yellow_pin;
	u8 Orange_Pin;
}Stepper_Motor_t;


u8 Stepper_u8Rotate(const Stepper_Motor_t* Copy_u16StepperMotor,u16 Copy_u16Angle,u8 Copy_u8Direction);

#endif
