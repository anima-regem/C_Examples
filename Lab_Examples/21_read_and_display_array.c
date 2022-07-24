#include <stdio.h>

int main()
{
    int a[100], *p, n, i;
    p = a;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }
    printf("The elements are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}