#include<stdio.h>

int sum(int a[],int n)
{
    int i,sum=0,*p;
    p=a;
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    return sum;
}

int main()
{
    int a[100],*p,n,i;
    p=a;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("The sum of the elements is: %d\n",sum(a,n));
    return 0;
}