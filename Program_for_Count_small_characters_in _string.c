/* 
////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Program for Count Small characters from string
// Input         : Accept input from user (Strig)
// Output        : Small characters in above string is = .....
// Description   : program which accept string from user and count number of
//                 small characters.
// Author        : Prafull Bokade
//
/////////////////////////////////////////////////////////////////////////////////////////
// Input   : "Hello Prafull"
// Output  :  10
// Input   : "Small charactorS"
// Output  :  13
/////////////////////////////////////////////////////////////////////////////////////////
*/

#include<stdio.h> 


int CountSmall(char *str) 
{ 
	int iCnt = 0; 
	if(str == NULL)
	{
		return -1;
	}
	while(*str != '\0') 
	{ 
		if((*str >= 'a') && (*str <= 'z'))
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

	iRet = CountSmall(arr); 
	printf("%d\n",iRet); 
	
    return 0; 
}
