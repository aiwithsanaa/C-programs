#include<stdio.h>
int main()
{
    int length,breadth,area;
    printf("Enter the Length: ");
    scanf("%d", &length);
    printf("Enter the breadth: ");
    scanf("%d", &breadth);
    /*we have formula of area of rectangle i.e. length*breadth 
    also area of square is (side)^2
    as square has length=breadth we can also use formula of area of reactangle */
    area=length*breadth;
    printf("Area of Rectangle or Square : %d",area);
    return 0;
}