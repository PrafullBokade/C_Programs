/* 
/////////////////////////////////////////////////////////////////////
//
// Function name : Check whether given character is alphabet or not 
// Input :         Accept Character from user
// Output :        Bool (True or False)
// Description :   It is used to check whether it is alphabet or not
// Author :        Prafull Bokade
//
////////////////////////////////////////////////////////////////////
// (A-Z a-z)   
// Input :  F
// Output : TRUE
// Input :  & 
// Output : FALSE 
///////////////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1 
#define FALSE 0 

typedef int BOOL; 

BOOL ChkAlpha(char ch) 
{ 
 // Apply condition to check whether it is alphabet or not.
	if(((ch >='a') && (ch <= 'z')) || ((ch >='A') && (ch <= 'Z')))
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
    
	bRet = ChkAlpha(cValue); 
	if(bRet == TRUE) 
	{ 
		printf("It is Character\n"); 
	} 
	else 
	{ 
		printf("It is not a Character\n"); 
	} 
 
	return 0; 
}