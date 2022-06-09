////////////////////////////////////////////////////////
// Write a program which accept string from user and
// copy the contents of that string into another string. 
// (Implement strcpy() function) 
// Input  : Hello Sir
// Output : Hello Sir     in another string
/////////////////////////////////////////////////////////

#include<stdio.h> 
void StrCpyX(char *src, char *dest) 
{ 
	if((src == NULL) || (dest == NULL))
	{
		return;
	}

	while(*src != '\0') 
	{ 
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

	StrCpyX(arr,brr); 
	printf("Copy string : %s",brr); 

	return 0;

}