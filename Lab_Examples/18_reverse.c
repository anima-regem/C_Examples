#include<stdio.h>
#include<string.h>

void reverse(char str[], char rev[])
{
    int i, j;
    for(i=0, j=strlen(str)-1; i<strlen(str), j>=0; i++, j--)
    {
        rev[i] = str[j];
    }
    rev[i] = '\0';
}

int main()
{
    char str[100], rev[100];
    printf("Enter the string: ");
    gets(str);
    reverse(str, rev);
    printf("Reversed string: %s\n", rev);
    return 0;
}