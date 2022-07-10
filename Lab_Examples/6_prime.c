#include<stdio.h>
int main()
{
    int i,n,flag=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=2;i<(n/2);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("The number is not prime.\n");
    else
        printf("The number is prime.\n");
    return 0;
}