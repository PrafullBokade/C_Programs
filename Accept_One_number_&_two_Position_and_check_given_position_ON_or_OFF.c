//////////////////////////////////////////////////////////////////////
// Write a program accept One number and Two position from User
// and check whether Bit at first or Bit at second is ON or OFF  
// Input  : 10    2   4
// Output : True 
///////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2) 
{ 
	UINT iMask = 0, iResult = 0, iMask1 = 0x00000001,iMask2 = 0x00000001;
	
	iMask1 = iMask1 << (iPos1 - 1);
	iMask2 = iMask2 << (iPos1 - 1);

	iMask = iMask1 | iMask2; 
	iResult = iNo & iMask;

	if((iResult == iMask1) || (iResult == iMask2))
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
	unsigned int iValue1 = 0, iValue2 =0, iValue3 = 0 ;
	bool bRet = FALSE;

	printf("Enter number\n");
	scanf("%u",&iValue1);
	printf("Enter first position\n");
	scanf("%u",&iValue2);
	printf("Enter second position\n");
	scanf("%u",&iValue3);

	bRet = ChkBit(iValue1, iValue2, iValue3);

	if(bRet == TRUE)
	{
		printf("Entered bits are on\n");
	}
	else
	{
		printf("Entered bits are off\n");
	}
	return 0;
}