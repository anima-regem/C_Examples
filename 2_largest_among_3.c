#include<stdio.h>
int main()
{
    int a,b,c,l;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    l = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("The largest among three numbers is %d\n",l);
    return 0;
}