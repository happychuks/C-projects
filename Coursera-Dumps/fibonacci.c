#include <stdio.h>

int fibonacci(int);

//fibonnaci numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
int main(void) {
    int n, fib;

    printf("Enter a fibo number to computer: ");
    scanf("%d", &n);

    if (n <= 0)
        printf("You entered a negative number. Aborting...");
    else {
        fib = fibonacci(n);
        printf("The %dnth fibonnaci number is %d. \n", n, fib);
    }

    return 0;
}

int fibonacci(int n) {

    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}