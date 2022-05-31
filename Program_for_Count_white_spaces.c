/* 
////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Program for accept string from user and count number of white spaces
// Input         : Accept input from user (Strig)
// Output        : Display count of white spaces
// Description   : Program which accept string from user and 
//                 display count of white spaces
// Author        : Prafull Bokade
//
//////////////////////////////////////////////////////////////////////////////////////////////// 
// Input   :  Hello Prafull
// Output  :  1
// Input   :  How are you
// Output  :  2
////////////////////////////////////////////////////////////////////////////////////////////////
*/



#include<stdio.h> 

int CountWhite(char *str) 
{ 
	int iCnt = 0;

	if(str == NULL)
	{
		return -1;
	}

	while(*str != '\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
} 

int main() 
{ 
	char arr[20]; 
	int iRet = 0; 

	printf("Enter string : \n"); 
	scanf("%[^'\n']s",arr); 
 
	iRet = CountWhite(arr); 
	printf("White Spaces in given String : %d",iRet); 

	return 0; 

}