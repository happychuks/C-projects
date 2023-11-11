/*
You arrive in front of a bridge that you must cross to reach a village before dark. Crossing the bridge is not free - the bridgekeeper asks you to roll two dice to determine the cost. You decide to write a program to verify that he is charging the right price.

Your program should read two integers, between 1 and 6, representing the values of each die. If the sum is greater than or equal to 10, then you must pay a special fee (36 coins). Otherwise, you pay twice the sum of the values of the two dice. Your program must then display the text "Special tax" or "Regular tax" followed by the amount you have to pay on the next line.

Example
Input
5
6
Output
Special tax
36
 

Input
4
3
Output
Regular tax
14
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.
*/
#include <stdio.h>

/**
 * main - Bridge tax calculator
 * Return 0 on success
 */
 
 int main(void) {
     
     int dice1, dice2, sum, specialTax = 36, regularTax;
     
     /*Integers input between 1 and 6*/
     scanf("%d", &dice1);
     scanf("%d", &dice2);
     
     sum = dice1 + dice2;
     regularTax = 2 * (sum);
     
     if (sum >= 10)
        printf("Special Tax\n%d", specialTax);
     else
        printf("Regular Tax\n%d", regularTax);
     
     
     
     return 0;
 }