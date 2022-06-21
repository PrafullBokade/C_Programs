//////////////////////////////////////////////////////////////////////
// Write a program accept one number from User  
// and count number of ON(1) bits in it without using % and / operator  
// Input  : 11
// Output : 3
///////////////////////////////////////////////////////////////////////

#include<stdio.h> 
#include<stdlib.h>


typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iMask = 0X00000001;
    int iResult = 0;
	int iCnt = 0, i = 0;

	for (i = 0; i< 32; i++)
	{
		iResult = iNo & iMask;
		if(iResult == iMask)
		{
			iCnt++;
		}
		iMask = iMask <<1;
	}
	
	return iCnt;
	
} 
int main()
{
	UINT iValue = 0, iRet = 0 ;

	
	printf("Enter a number : \n");
	scanf("%u",&iValue);
	
	
	iRet = CountOne(iValue);
	
	printf("Count of ON bits are: %d\n",iRet);	
	
	return 0;
}