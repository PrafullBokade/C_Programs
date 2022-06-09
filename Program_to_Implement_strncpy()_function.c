//////////////////////////////////////////////////////////////////////
// Write a program which accept string from user and copy the 
// contents of that string into another string. (Implement strncpy() 
// function) 
// Input  : Hello Maam How are you.
//          iValue = 10 
// Output : Hello Maam
///////////////////////////////////////////////////////////////////////

#include<stdio.h> 

void StrNCpyX(char *src, char *dest, int iCnt) 
{ 
	if((src == NULL) || (dest == NULL))
	{
		return;
	}
	
	while((iCnt > 0) && (*src != '\0')) 
	{ 
		*dest = *src; 
		src++; 
		dest++; 
		iCnt--; 
	} 
	*dest = '\0'; 
} 
int main() 
{ 
	char arr[30]; 
	char brr[30];  
	int iValue = 0;

	printf("Enter a string\n");
	scanf("%[^'\n']s",arr);

	printf("Enter a number\n");
	scanf("%d",&iValue);

	StrNCpyX(arr,brr,iValue); 
	printf("%s",brr); 
 
	return 0; 

} 