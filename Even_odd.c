#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("NUMBER YOU ENTERED that is %d IS EVEN!!",n);
    }
    else
    {
        printf("NUMBER YOU ENTERED that is %d IS ODD!!",n);
    }
    return 0;
}