/**************************************************************/
/**************************************************************/
/*********		Author: Ahmed Elboray		*******************/
/*********		File: DCM_interace.h		*******************/
/*********		Version: 1.00				*******************/
/**************************************************************/
/**************************************************************/

#ifndef DCM_INTERFACE_H_
#define DCM_INTERFACE_H_

#define DC_MOTOR_CW			0u
#define DC_MOTOR_CCW		1u

typedef struct{
	u8 PORT;
	u8 Pin1;
	u8 Pin2;
}DC_Motor_t;

u8 DCM_u8CW(const DC_Motor_t* Copy_cfgDCMotor);

u8 DCM_u8CCW(const DC_Motor_t* Copy_cfgDCMotor);

u8 DCM_u8Stop(const DC_Motor_t* Copy_cfgDCMotor);


#endif
