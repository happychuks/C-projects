#include <stdio.h>

int sumOfDigits(int n);

int main(void) {
    
    int N, totalSum;
    
    scanf("%d", &N);
    totalSum = sumOfDigits(N);
    printf("%d", totalSum);
    
    return 0;
}

int sumOfDigits(int n) {
    int result = 0;
    
    // Base case: if n is a single-digit number
    if (n < 10) {
        result = n;
    } else {
        // Recursive case: add the last digit to the sum of the rest of the digits
        result = n % 10 + sumOfDigits(n / 10);
    }

    return result;
}