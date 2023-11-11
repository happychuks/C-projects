#ifndef FACTORIAL_H
#define FACTORIAL_H

#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

int factorial(int n);
int factorial_gmp(mpz_t result, int n);

#endif