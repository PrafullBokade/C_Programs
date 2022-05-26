/* 
////////////////////////////////////////////////////////////////
//
// Function name : Summation of digits of each element in array. 
// Input :         Accept N elements from user
// Output :        Integer
// Description :   It is used to perform Summation of Digit
// Author :        Prafull Bokade
//
/////////////////////////////////////////////////////////////////
//
// Input : N : 6 
// Elements : 225 605 3 762 953 8520
// Output : 9 11 3 15 17 15 
//
/////////////////////////////////////////////////////////////////
*/

#include<stdio.h>
#include<stdlib.h> 

void DigitsSum(int Arr[], int iLength) 
{ 
	int iDigit = 0, i = 0, iSum = 0;

	if(Arr == NULL || iLength <= 0)
	{
		return ;
	}
	for(i = 0; i <iLength; i++)
	{
		while(Arr[i] > 0)
		{
			iDigit = Arr[i] % 10;
			if(iDigit > 0)
			{
				iSum = iSum + iDigit;
			}
			Arr[i] = Arr[i] / 10;
		}
		printf("%d\t",iSum);
		iSum = 0;
	}
} 
int main() 
{ 
	int iSize = 0,iRet = 0,iCnt = 0; 
	int *p = NULL; 

	printf("Enter number of elements\n"); 
	scanf("%d",&iSize); 

	p = (int *)malloc(iSize * sizeof(int)); 

	if(p == NULL) 
	{ 
		printf("Unable to allocate memory"); 
		return -1; 
	} 
	printf("Enter %d elements \n",iSize); 
	
	for(iCnt = 0;iCnt<iSize; iCnt++) 
	{ 
		printf("Enter element : %d\n",iCnt+1); 
		scanf("%d",&p[iCnt]); 
	} 
	DigitsSum(p, iSize); 
 
	free(p); 
	return 0; 
}
