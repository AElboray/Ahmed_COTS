/**************************************************************/
/**************************************************************/
/*********		Author: Ahmed Elboray		*******************/
/*********		File: CLCD_interface.h		*******************/
/*********		Version: 1.00				*******************/
/**************************************************************/
/**************************************************************/

#ifndef CLCD_INTERFACE_H_
#define CLCD_INTERFACE_H_


void CLCD_voidSendCmd(u8 Copy_u8Cmd);

void CLCD_voidSendData(u8 Copy_u8Data);

void CLCD_voidInit(void);

u8 CLCD_u8SendString(const char* Copy_chString);

void CLCD_voidSendNumber(s32 Copy_s32Number);

void CLCD_voidGoToXY(u8 Copy_u8XPos, u8 Copy_u8YPos);
void CLCD_voidDeletePos(u8 Copy_u8XPos, u8 Copy_u8YPos);

void CLCD_voidSendSpecialCharacter(u8 *Copy_pu8Pattern, u8 Copy_u8PatternNum, u8 Copy_u8XPos, u8 Copy_u8YPos );


#endif
