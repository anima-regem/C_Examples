#include<stdio.h>

int FactWithR(int n)
{
    if(n==0)
        return 1;
    else
        return n*FactWithR(n-1);
}

int FactWithoutR(int n)
{
    int i, fact=1;
    for(i=1; i<=n; i++)
        fact*=i;
    return fact;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Factorial of %d with recursion is %d\n", n, FactWithR(n));
    printf("Factorial of %d without recursion is %d\n", n, FactWithoutR(n));
    return 0;
}