#include<stdio.h>
int main()
{
    //Swapping of two numbers without using third variable
    int a,b,temp;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    printf("After Swapping we have:-\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of A: %d\n",a);
    printf("Value of B: %d",b);
    return 0;
}
