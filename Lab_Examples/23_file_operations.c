#include<stdio.h>

void write()
{
    FILE *fp;
    char fname[20],str[100];
    printf("Enter file name : ");
    gets(fname);
    fp = fopen(fname,"w");
    if(fp == NULL)
    {
        printf("File not found\n");
        return;
    }
    printf("Enter string : ");
    gets(str);
    fprintf(fp,"%s",str);
    fclose(fp);
}

void read()
{
    FILE *fp;
    char fname[20];
    printf("Enter file name : ");
    gets(fname);
    fp = fopen(fname,"r");
    if(fp == NULL)
    {
        printf("File not found\n");
        return;
    }
    char ch;
    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
}

void append()
{
    FILE *fp;
    char fname[20],str[100];
    printf("Enter file name : ");
    gets(fname);
    fp = fopen(fname,"a");
    if(fp == NULL)
    {
        printf("File not found\n");
        return;
    }
    printf("Enter string : ");
    gets(str);
    fprintf(fp,"%s",str);
    fclose(fp);
}

int main()
{
    read();
    write();
    append();
    return 0;
}