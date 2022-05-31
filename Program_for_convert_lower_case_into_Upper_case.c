/* 
////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Program for accept string from user and convert it into UPPER case.
// Input         : Accept input from user (Strig)
// Output        : UPPER case letters
// Description   : program which accept string from user and 
//                 convert it into UPPER case.
// Author        : Prafull Bokade
//
///////////////////////////////////////////////////////////////////////////////////////// 
// Input   :  hello Prafull
// Output  :  HELLO prafull
/////////////////////////////////////////////////////////////////////////////////////////
*/


#include<stdio.h>

void struprx(char *str) 
{ 
	if(str == NULL)
	{
		return;
	}
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}


int main() 
{ 
 char arr[20]; 

 printf("Enter string :\n"); 
 scanf("%[^'\n']s",arr); 

 struprx(arr); 
 printf("Modified string is : %s\n",arr); 

 return 0; 
} 