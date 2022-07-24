#include<stdio.h>

typedef struct {
    float a;
    float b;
} euclidean;

int main()
{
    euclidean e1, e2;
    printf("Enter the first euclidean: ");
    scanf("%f %f", &e1.a, &e1.b);
    printf("Enter the second euclidean: ");
    scanf("%f %f", &e2.a, &e2.b);
    printf("Resultant is <%0.2f,%0.2f>\n",e1.a+e2.a,e1.b+e2.b);
    return 0;
}