#include<stdio.h>

int main()
{
    FILE *fp1,*fp2;
    char ch,input[20],output[20];
    int words = 0, lines = 0, characters = 0;
    printf("Enter the name of the file to be read : ");
    gets(input);
    fp1 = fopen(input, "r");
    if (fp1 == NULL)
    {
        printf("File not found.\n");
        return 0;
    }
    printf("Enter the name of the file to be written : ");
    gets(output);
    fp2 = fopen(output, "w");
    if (fp2 == NULL)
    {
        printf("File not found.\n");
        return 0;
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        if (ch == ' ')
            words++;
        if (ch == '\n')
            lines++;
        characters++;
    }
    fprintf(fp2, "Number of words : %d\n", words);
    fprintf(fp2, "Number of lines : %d\n", lines);
    fprintf(fp2, "Number of characters : %d\n", characters);
    fclose(fp1);
    fclose(fp2);
    return 0;
}