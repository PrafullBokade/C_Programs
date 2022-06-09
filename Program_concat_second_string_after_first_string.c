/////////////////////////////////////////////////
// Write a program which 2 strings from user 
// and concat second string after first string. 
// Input :Hello Sir 
//        How are you.
// Output:Hello Sir How are you
//////////////////////////////////////////////// 


#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    if((src == NULL) || (dest == NULL))
	{
		return;
	}
    while(*src != '\0')
    {
        src++;
    }
    *src = ' ';
    src++;
    while(*dest != '\0')
    {
        *src = *dest;
        dest++;
        src++;
    }
    *src = '\0';
}
int main()
{
    char arr[50];
    char brr[30];

    printf("Enter First String :\n");
    scanf("%[^'\n']s",arr);
    
    printf("Enter Second String :\n");
    scanf(" %[^'\n']s",brr);

    StrCatX(arr,brr);

    printf("%s",arr);

    return 0;

}
