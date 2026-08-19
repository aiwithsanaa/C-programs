#include <stdio.h>

int main()
{
    int n, i;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
     //n! = n × (n-1) × (n-2) × ... × 1
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);

    return 0;
}