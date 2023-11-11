#include "factorial.h"
/**
 * factorial_gmp - main factorial
 * @result: gmp factorization
 * @n: number
 * Returns: gmp factorization
*/
int factorial_gmp(mpz_t result, int n)
{

    if (n <= 0)
    {
        mpz_set_ui(result, 1);
        return (1);
    }
    else
    {
        mpz_t temp; // Declare a GMP integer to store the result
    
        mpz_init(result); // Initialize the result to 0
        mpz_init(temp); // Initialize the result

        factorial_gmp(temp, n - 1); //
        mpz_set_ui(result, n); // Set result to 1 initially
        mpz_mul(result, result, temp); 
        mpz_clear(temp);

    }
    

}