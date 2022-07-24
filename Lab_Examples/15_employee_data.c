#include<stdio.h>
#include<string.h>
typedef struct
{
    int id;
    char name[20];
    float salary;
} employee;

int main()
{
    employee e[100];
    int i, n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter the id of Employee %d : ", i+1);
        scanf("%d", &e[i].id);
        printf("Enter the name of Employee %d : ", i+1);
        getchar();
        gets(e[i].name);
        printf("Enter the salary of Employee %d : ", i+1);
        scanf("%f", &e[i].salary);
    }

    for(i=0; i<n; i++)
    {
        printf("Employee %d: id=%d, name=%s, salary=%0.2f\n", i+1, e[i].id, e[i].name, e[i].salary);
    }
    return 0;
}
