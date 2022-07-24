#include<stdio.h>
int main()
{
    int n,A[100];
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("The array you entered is : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(A[j]>A[j+1])
            {
                A[j]=A[j]+A[j+1];
                A[j+1]=A[j]-A[j+1];
                A[j]=A[j]-A[j+1];
            }
        }
        printf("\n\nPass %d : \n",(n-i));
        for(int m=0;m<n;m++)
        {
            printf("%d\t",A[m]);
        }
    }
    printf("\n\nThe sorted array is : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
    return 0;
}