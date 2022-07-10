#include<stdio.h>
int main()
{
    int i,n,a[100],sum=0;
    float avg;
    printf("Enter a limit : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg = (float)sum/n;
    printf("The sum is %d and average is %0.2f\n",sum,avg);
    return 0;
}