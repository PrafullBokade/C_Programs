////////////////////////////////////////////////////////////
// Write a program which accept string from user and
// copy Capital characters of that string into another string.  
// Input  :Hello Sir How are you.      
// Output : HSH
/////////////////////////////////////////////////////////////


#include<stdio.h>
void StrCpySmall(char *src, char *dest)
{
    if((src == NULL) || (dest == NULL))
	{
		return;
	}

    while(*src != '\0')
    {
        if((*src >='A') && (*src <='Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}
int main()
{
    char arr[50];
    char brr[30];

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    StrCpySmall(arr,brr);

    printf("Updated second string is: %s",brr);

    return 0;

}