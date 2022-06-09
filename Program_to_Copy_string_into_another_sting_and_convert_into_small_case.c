////////////////////////////////////////////////////////
// Write a program which accept string from user and
// copy that character of string into another string
// by concverting all Capital characters into small case 
// Input  : Hello Maam 
// Output : hello maam     in another string
/////////////////////////////////////////////////////////

#include<stdio.h> 
void StrCpySmallX(char *src, char *dest) 
{ 
	if((src == NULL) || (dest == NULL))
	{
		return;
	}

	while(*src != '\0') 
	{ 
		if((*src >= 'A')&&(*src <= 'Z'))
		{
			*src = *src + 32;
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

	StrCpySmallX(arr,brr); 
	printf("Copy string : %s",brr); 

	return 0;

}