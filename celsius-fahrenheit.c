#include<stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter the Temperature in Celsius: ");
    scanf("%f",&celsius);
    //conversion formula for celsius to fahrenheit is
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit is: %.2f",fahrenheit);
    return 0;
    // conversion formula to convert fahrenheit to celsius is: (f-32)*5/9
}