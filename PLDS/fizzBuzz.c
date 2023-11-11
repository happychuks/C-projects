#include <stdio.h>


void fizzBuzz2(void);

int main (void)
{
    fizzBuzz2();
    printf("\n");
}

void fizzBuzz(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if ((i % 3 == 0 && i % 5 != 0))
        {
            printf("Fizz ");
        }
        else if (i % 5 == 0 && i % 3 != 0) 
        {
            printf("Buzz ");
        }
        else if (i % 3 == 0 && i % 5 == 0) 
        {
            printf("FizzBuzz "); 
        }
        else
            printf("%d ", i);
    }
}

void fizzBuzz2(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if ((i % 3 == 0 && i % 5 != 0))
        {
            printf("Fizz ");
        }
        else if (i % 5 == 0 && i % 3 != 0) 
        {
            printf("Buzz ");
        }
        else if (i % 3 == 0 && i % 5 == 0) 
        {
            printf("FizzBuzz "); 
        }
        else
            printf("%d ", i);
    }
}