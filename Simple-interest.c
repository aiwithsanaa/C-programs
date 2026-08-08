#include <stdio.h>

int main()
{
    float P, R, T, SI;

    printf("Enter Principal: ");
    scanf("%f", &P);

    printf("Enter Rate: ");
    scanf("%f", &R);

    printf("Enter Time: ");
    scanf("%f", &T);

    SI = (P * R * T) / 100;

    printf("Simple Interest = %.2f", SI);

    return 0;
}