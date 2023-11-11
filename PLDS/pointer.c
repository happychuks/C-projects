#include<stdio.h>

void ourFuntion(void);
int main()
{
    int x;
    x = 10;

    /*Pointer is a variable whose value is the address of another variable*/
    /* How to declare a pointer*/
    int* ptr; /*Declaration of a Pointer*/
    ptr = &x; /*Assignment/Initializing of a Pointer*/
    printf("The value of x is: %d \n", x);
    printf("The Address of x is: %p \n", &x);
    printf("The value of Pointer ptr is: %p \n", ptr);
    printf("The Address of Pointer ptr is: %p \n", &ptr);
    printf("The value of x using pointer is: %d \n", *ptr);
    printf("The value of x using pointer is: %d \n", *(&x));

    /*To update the value of a variable using pointer*/
    *ptr = 20;
    printf("The value of x using pointer is: %d \n", *ptr);
    
    ourFuntion();
    
    
    return 0;
}

void ourFuntion(void)
{
    int x;
    x = 15;
    int * ptrB;
    ptrB = &x;


    printf("Our Function \n");    
    printf("The value of x is: %d \n", x);
    printf("The Address of x is: %p \n", &x);

}