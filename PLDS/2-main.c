#include "factorial.h"

/**
 * main function
 * 
 * Return 
*/

int main(void)
{
    int n;
    mpz_t result;

    printf("Enter a number: ");
    scanf("%d", &n);

    factorial_gmp(result, n);
    gmp_printf("\nThe factorial of %d is %Zd\n", n, result);

    mpz_clear(result);
    
    return 0;
}