#include<stdio.h>

int main()
{
    char a[100],b[100],c[100];
    int l,m,i;
    printf("Enter a string: ");
    gets(a);
    for(i=0;a[i]!='$';i++);
    l=i;
    printf("Enter another string: ");
    gets(b);
    for(i=0;b[i]!='$';i++);
    m=i;
    for(i=0;i<l;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<m;i++)
    {
        c[l+i]=b[i];
    }
    c[l+m]='\0';
    printf("Concatinated string is : %s\n",c);
    return 0;
}