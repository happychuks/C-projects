#include<stdio.h>
void count(int n);/*Prototype*/
/**
 * main - main function
 * count - count function
 * @n: integer n
 * Return nothing
*/

void main() /*Main function*/ 
{
    count(3); /*Calling the User-defined Function*/
}

void count(int n)/*User-defined function*/
{
    static int d;
    d = 1; /*Statically Initialized Variable is global to the program file*/
    printf("%d", n);
    printf("%d", d);
    d++; 
    if (n > 1) //condition 
        count(n-1); //recursive call until condition is false
    printf("%d", d);
}


