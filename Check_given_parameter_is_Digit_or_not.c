/* 
/////////////////////////////////////////////////////////////////////
//
// Function name : Check whether given input is Digit or not 
// Input :         Accept input from user
// Output :        Bool (True or False)
// Description :   It is used to check whether input is Digit or not
// Author :        Prafull Bokade
//
////////////////////////////////////////////////////////////////////
// (0-9) 
// Input : 7 
// Output : TRUE 
// Input : d 
// Output : FALSE 
///////////////////////////////////////////////////////////////////
*/


#include<stdio.h>
#include<stdbool.h>
#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 

BOOL ChkDigit(char ch) 
{ 
 // Apply condition to check whether it is digit or not. 
	if((ch >= '0') && (ch <= '9'))
	{
		return true;
	}
	else
	{
		return false;
	}
} 
int main() 
{ 
	char cValue = '\0'; 
	BOOL bRet = FALSE; 

	printf("Enter the character\n"); 
	scanf("%c",&cValue); 

	bRet = ChkDigit(cValue); 
	if(bRet == TRUE) 
	{ 
		printf("It is Digit\n"); 
	} 
	else 
	{ 
		printf("It is not a Digit\n"); 
	} 
 
	return 0; 
} 