#include<stdio.h>

void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int a, b, *p, *q;
    p = &a;
    q = &b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(p, q);
    printf("After swapping: %d %d\n", a, b);
    printf("The sum of the numbers is: %d\n", *p + *q);
    return 0;
}