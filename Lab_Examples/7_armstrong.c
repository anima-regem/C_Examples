#include<stdio.h>
#include<math.h>

int main()
{
    int n,l=0,i,tmp,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    tmp=n;
    while(n!=0)
    {
        l++;
        n/=10;
    }
    
    n=tmp;
    while(n!=0)
    {
        i=n%10;
        sum+=pow(i,l);
        n/=10;
    }
    if(sum==tmp)
        printf("The number is an Armstrong Number.\n");
    else
        printf("The number is not Armstrong Number.\n");

}