#include<stdio.h>
int main()
{
    //Swap two numbers using third veriable
    int a,b,temp;
    printf("Enter the value of A: ");
    scanf("%d",&a);
    printf("Enter the value of B: ");
    scanf("%d",&b);
    printf("After Swapping we have:-\n");
    temp=a;
    a=b;
    b=temp;
    printf("Value of A: %d\n",a);
    printf("Value of B: %d",b);
    return 0;
}
