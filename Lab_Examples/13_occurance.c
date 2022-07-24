#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], vowels[]="aeiouAEIOU";
    int i,j, vowel_count=0,consonant_count=0,space_count=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            space_count++;
        }
        else if((str[i]>'a'&&str[i]<'z')||(str[i]>'A'&&str[i]<'Z'))
        {
            for(j=0;j<strlen(vowels);j++)
            {
                if(str[i]==vowels[j])
                {
                    vowel_count++;
                }
            }
        }
        else
        {
            consonant_count++;
        }
    }
    printf("\nVowel Count: %d\nConsonant Count: %d\nSpace Count: %d\n",vowel_count,consonant_count,space_count);

    return 0;

}