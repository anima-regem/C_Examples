#include<stdio.h>
int main()
{
    int n,s,i,a[100],flag=0;
    printf("Enter a limit : ");
    scanf("%d", &n);
    printf("Enter the values : ");
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the search term : ");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            printf("The term found at %d",i+1);
            flag=1;
        }
    }
    if(flag==0)
        printf("The term was not found.\n");
    return 0;
}