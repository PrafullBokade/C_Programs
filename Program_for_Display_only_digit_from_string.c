/* 
////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Program for accept string from user and display only digits from that string.
// Input         : Accept input from user (Strig)
// Output        : Display only digits from that string
// Description   : Program which accept string from user and 
//                 display only digits from that string.
// Author        : Prafull Bokade
//
//////////////////////////////////////////////////////////////////////////////////////////////// 
// Input   :  Prafull12345
// Output  :  12345
////////////////////////////////////////////////////////////////////////////////////////////////
*/

#include<stdio.h> 

void DisplayDigit(char *str) 
{ 
	if(str == NULL)
	{
		return;
	}
	while(*str != '\0')
	{
		if((*str >= '0') && (*str <= '9'))
		{
			printf("%c",*str);
		}
		str++;
	}
} 

int main() 
{ 
	char arr[20]; 

	printf("Enter string\n"); 
	scanf("%[^'\n']s",arr); 

	DisplayDigit(arr); 
	
    return 0; 
}