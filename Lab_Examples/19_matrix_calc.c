#include <stdio.h>

void read(int a[][20], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the element %d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}

void display(int a[][20], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void sum(int a[][20],int b[][20],int c[][20],int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiply(int a[][20], int b[][20], int c[][20], int m, int n, int p)
{
    int i, j, k;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void transpose(int a[][20], int b[][20], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }
    }
}

int main()
{
    int a[20][20], b[20][20], c[20][20], m, n, p, o;
    while (1)
    {
        printf("1. Sum\n2. Multiply\n3. Transpose\nPress any other key to exit\n");
        printf("Enter your choice: ");
        scanf("%d", &o);
        switch (o)
        {
        case 1:
            printf("Enter the dimensions of the matrices: ");
            scanf("%d %d", &m, &n);
            printf("Enter the first matrix: \n");
            read(a, m, n);
            printf("Enter the second matrix: \n");
            read(b, m, n);
            sum(a, b, c, m, n);
            printf("---Matrix 1---\n");
            display(a, m, n);
            printf("---Matrix 2---\n");
            display(b, m, n);
            printf("---Sum---\n");
            display(c, m, n);
            break;
        case 2:
            printf("Enter the dimensions of the matrices:(MxN) ");
            scanf("%d %d", &m, &n);
            printf("Enter the dimension of the second matrix:(NxP)(Enter P) ");
            scanf("%d", &p);
            printf("Enter the first matrix: \n");
            read(a, m, n);
            printf("Enter the second matrix: \n");
            read(b, n, p);
            multiply(a, b, c, m, n, p);
            printf("---Matrix 1---\n");
            display(a, m, n);
            printf("---Matrix 2---\n");
            display(b, n, p);
            printf("---Multiplication---\n");
            display(c, m, p);
            break;
        case 3:
            printf("Enter the dimensions of the matrix: ");
            scanf("%d %d", &m, &n);
            printf("Enter the matrix: \n");
            read(a, m, n);
            transpose(a, b, m, n);
            printf("---Matrix---\n");
            display(a, m, n);
            printf("---Transpose---\n");
            display(b, n, m);
            break;
        default:
            return 0;
        }
    }
    return 0;
}