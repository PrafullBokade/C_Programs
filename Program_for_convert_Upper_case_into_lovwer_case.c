/* 
////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Program for accept string from user and convert it into lower case.
// Input         : Accept input from user (Strig)
// Output        : lower case letters
// Description   : program which accept string from user and 
//                 convert it into lower case.
// Author        : Prafull Bokade
//
///////////////////////////////////////////////////////////////////////////////////////// 
// Input   : "Hello Prafull"
// Output  :  hello prafull
/////////////////////////////////////////////////////////////////////////////////////////
*/


#include<stdio.h> 
void strlwrx(char *str) 
{ 
	if(str == NULL)
	{
		return;
	}
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
} 


int main() 
{ 
 char arr[20]; 

 printf("Enter string : \n"); 
 scanf("%[^'\n']s",arr); 

 strlwrx(arr); 
 printf("Modified string is : %s\n",arr); 
 
 return 0; 

} 