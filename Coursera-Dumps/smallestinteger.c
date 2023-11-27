/*
The goal of this problem is to find the smallest integer in a list of numbers.

To help you with this task, please write a function called min() that finds and returns the smallest amongst two integers (be sure to also write a prototype for this function). The function thus takes two integers as input and returns the smallest of the two. This function will use an if statement with a condition that contains either "less than" or "greater than".

Next, please use min() in your main function to work your way through an entire list of numbers in order to find its minimum. The first number you read gives the number of elements in the list of integers under consideration. You will then read the integer values, using min() to keep only the smallest integer read at each step. In the end, please print out the smallest integer in the list.

Example
Input
10
4 3 6 2 6 8 9 8 5 4
Output
2
*/

#include <stdio.h>

/**
 * main - This program finds the smallest integer
 * Returns: The smallest value
 */
 
int min(int arr[], int n);


int main(void) {
     int n, i, value;
     
     //user input the number of integers to be read
     scanf("%d", &n);
     
     int listOfnumber[n];
     int smallestInt;
     
     //loop through the number of integers to be read
     for (i = 0; i < n; i++) {
         
         //read the integer value and add to list
         scanf("%d", &value);
         listOfnumber[i] = value;
         
         
     }
    
    smallestInt = min(listOfnumber, n);
    printf("%d", smallestInt);

     return 0;
 }
 
int min(int arr[], int n) {
    int minValue = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }
    return minValue;
}