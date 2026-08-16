#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        printf("%d",i);
        sum=sum+i;
        if(i<n-1)
        printf(" + ");
        }
    }
    printf("\nSum = %d",sum);
    return 0;
}