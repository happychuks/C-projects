#include<stdio.h>

/**
 * main - main function
 * sum - sum function to be called recursively
 * Return nothing
*/

void main() /*Main function - Entry Point; Returns nothing*/
{
    int a; /*Declaration of Variable a*/
    a = sum(5); /*Assigning/Initializing with a function that takes in an integer parameter*/
    printf("%d", a);
}

int sum(int x)
{
    int s = 0;
    if (x == 1)
        return x;
    s = x + sum(x-1);
    return s;
}