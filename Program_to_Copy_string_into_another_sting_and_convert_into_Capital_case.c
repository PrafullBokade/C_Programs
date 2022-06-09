////////////////////////////////////////////////////////
// Write a program which accept string from user and
// copy that character of string into another string
// by concverting all small characters into Capital case 
// Input  : Hello Maam 
// Output : HELLO MAAM     in another string
/////////////////////////////////////////////////////////

#include<stdio.h> 
void StrCpyCapX(char *src, char *dest) 
{ 
	if((src == NULL) || (dest == NULL))
	{
		return;
	}

	while(*src != '\0') 
	{ 
		if((*src >= 'a')&&(*src <= 'z'))
		{
			*src = *src - 32;
		}
		*dest = *src; 
		src++; 
		dest++; 
	} 
	*dest = '\0'; 
} 
int main() 
{ 
	char arr[30];  
	char brr[30]; 

	printf("Enter a string :\n");
	scanf("%[^'\n']s",arr);

	StrCpyCapX(arr,brr); 
	printf("Copy string : %s",brr); 

	return 0;

}