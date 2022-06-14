/////////////////////////////////////////////////////////////////
// Write a program which checks whether 
// 7th, 15th, 21st & 28th bit is ON or OFF
// Input  :  67641376      (0X04082020) 
//           0000 1000 0001 0000 0100 0000 0100 0000 
// Output :  Bit is ON
// Hint   :  Above 67641376 all bit are on below this bit r off 
/////////////////////////////////////////////////////////////////

#include<stdio.h> 
#include<stdbool.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo)
{
	int iMask = 0X04082020;
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
		printf("Bit is ON");
	}
	else
	{
		printf("Bit is OFF");
	}
	return 0;

}