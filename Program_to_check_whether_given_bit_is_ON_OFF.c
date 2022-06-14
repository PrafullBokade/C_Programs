////////////////////////////////////////////////////////
// Write a program which checks whether 
// 15th bit is ON or OFF
// Input  :  16384   (0X00004000)
// Output :  Bit is ON
/////////////////////////////////////////////////////////

#include<stdio.h> 
#include<stdbool.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
	int iMask = 0X00004000;
	int iResult = 0;

	iResult = iNo & iMask;

	if(iResult == iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}

int main() 
{ 
	int iValue = 0;  
	BOOL bRet = FALSE;

	printf("Enter Number :\n");
	scanf("%d",&iValue);

	bRet = ChkBit(iValue);

	if(bRet == TRUE)
	{
		printf("15th Bit is ON");
	}
	else
	{
		printf("15th Bit is OFF");
	}
	return 0;

}