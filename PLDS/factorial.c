#include "factorial.h"

/**
 * factorial - calculates the factorial of of a number
 * 
 * Returns the computed factorial
*/

int factorial(int n)
{
    /**
     * factorial(1) = 1
     * factorial(2) = 2 * 1 = 2 * factorial(1)
     * factorial(3) = (3) * (2 * 1) = 3 * factorial(2)
     * factorial(4) = (4) * (3 * 2 * 1) = 4 * factorial(3)
     * factorial(5) = (5) * (4 * 3 * 2 * 1) = 5 * factorial(4)
     * factorial(n) = (n) * factorial(n - 1)
    */
/*recursive function works downward and then back up
factorial(n) = n * factorial(n - 1)
where n = 5
factorial(5) = 5 * 24 = 120; ==>
factorial(4) = 4 * 6 = 24; ==>
factorial(3) = 3 * 2 = 6; ==>
factorial(2) = 2 * 1; 2 ==>
factorial(1) = 1*/

    if (n <= 0)
        return 0;
    
    if (n == 1)
        return 1;
    
    return ((n) * factorial(n - 1));
}