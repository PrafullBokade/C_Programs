/* 
////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Program difference between frequency of small characters and capital characters. 
// Input         : Accept input from user (Strig)
// Output        : Diff.between Small and Capital char is : .....
// Description   : program which accept string from user and count number of
//                 diff between small and capital char. 
// Author        : Prafull Bokade
//
///////////////////////////////////////////////////////////////////////////////////////// 
// Input   : "Hello Prafull"
// Output  :  10 - 2 =8
// Input   : "Diff between Small char and Capital char"
// Output  :  31 -3 =28
/////////////////////////////////////////////////////////////////////////////////////////
*/

#include<stdio.h>

int Difference(char *str) 
{ 
	int iCnt1 = 0, iCnt2 = 0; 
	if(str == NULL)
	{
		return -1;
	}

	while(*str != '\0') 
	{ 
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCnt1++;
		}
		else if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt2++;
		}
		str++;
	} 
	return iCnt1 - iCnt2; 
}


int main() 
{ 
	char arr[20]; 
	int iRet = 0; 

	printf("Enter string :\n"); 
	scanf("%[^'\n']s",arr); 
	
    iRet = Difference(arr); 
	printf("%d\n",iRet); 
	
    return 0; 
} 