#include <stdio.h>

void findMax();
void findMin();

int main(void) {

    //findMax();
    findMin();

    int arr[] = {10, 34, 4, 56, 1};
    int n = sizeof(arr) / sizeof(arr[0]); ///this calculates the byte size of the entire array divided by bytes size of an element of the array
    printf("The minimum value in the array is: %d\n", findMin(arr, n));

    return 0;
}

void findMax() {

    int i, max = 0, age;
    for (i = 0; i < 5; i++) {
        printf("Enter Age: ");
        scanf("%d", &age);
        if (age > max) {
            max = age;
        }
    }
    printf("The Max age is: %d\n", max);

}

void findMin() {

    int i, min = 100, age;
    for (i = 0; i < 5; i++) {
        printf("Enter Age: ");
        scanf("%d", &age);
        if (age < min) {
            min = age;
        }
    }
    printf("The Min age is: %d\n", min);

}

int findMin(int arr[], int n) {
    int minValue = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }
    return minValue;
}