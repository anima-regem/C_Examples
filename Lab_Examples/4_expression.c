#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g,h;
    printf("Enter a,b,c,d,e,f,g : ");
    scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
    h =  ((a -b / c * d + e) * (f +g));
    printf("The solution of the expression is %0.2f\n",h);
    return 0;
}