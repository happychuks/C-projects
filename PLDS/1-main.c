#include "factorial.h"

/**
 * main function
 * 
 * Return 
*/

int main(void)
{
    int n;
    printf("============Factorial============\n");
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nThe factorial of %d is %d\n", n, factorial(n));

    printf("\n");
    return 0;
}