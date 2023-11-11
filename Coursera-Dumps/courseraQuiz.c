/*Here is your final activity of this unit. Use it to apply everything you have learned! David is fighting Goliath (again...) and it turns out that Goliath is much bigger than David thought. Fortunately David is not short of resources and he plans to send robots to fight the giant. But before launching the assault, David must evaluate the performance of these robots to ensure success. This is where you come in. You are given some data on David's robots and need to compute and output a corresponding power score.

Here is how: You should write a program that takes several lines of input from a user (see the below example). The first line of the input indicates the number of robots to be deployed. Each subsequent line shows the height, the weight, the power of the engines and a resistance rating (1,2, or 3) of each of of these robots. Your program should use this information to calculate the total power of these robots. The power of all robots is the sum of the power of each robot, where the power of an individual robot is calculated via:

(enginePower + resistance) * (weight - height)

Example
Input:
2
50 60 2 1
43 62 5 2

Output:
163
Here the output in this example is the calculation

(2 + 1) * (60-50) + (5 + 2) * (62-43)

You must use a loop to read each of the lines!

Warning: Your program must allow David to evaluate any army he gives as an input, not just the one given as an example.*/

#include <stdio.h>

int main(void)
{
    int i, enginePower, resistance;
    int weight, height, noOfRobots, powerOfaRobot, powerOfAllRobots = 0;
    
    //printf("Enter number of Robots to be deployed: ");
    scanf("%d", &noOfRobots);
    
    for  (i = 0; i < noOfRobots; i++){
    
    //printf("\nEnter the height, weight, engine power and Resistance rating of a Robot: \n");
    
    //printf("Please select Resistance Rating between 1, 2, or 3\n");
    
    scanf("%d", &height);
    scanf("%d", &weight);
    scanf("%d", &enginePower);
    scanf("%d", &resistance);
    
    powerOfaRobot = (enginePower + resistance) * (weight - height);
    //printf("%d ", powerOfaRobot);
    
    powerOfAllRobots = powerOfAllRobots + powerOfaRobot;
    
    }
    
    printf("%d", powerOfAllRobots);
    
    
    return 0;
}


/*
Question 
You are helping a teacher average grades. You get bored computing averages by hand, so you decide to write a computer program to do the work for you.

Your program must first read an integer indicating the number of grades to be averaged. Next, your program will read the grades one by one, all of which are integers as well. Finally, your program will calculate and print the average of the grades to two decimal places.

Example
Input:
4
10
8
16
9
Output:
10.75

Solution
#include <stdio.h>

int main(void) {
    
    int i, noOfGrades, grade, sum = 0;
    
    double average = 0.00;
    
    scanf("%d",&noOfGrades);
    
    for (i = 0; i < noOfGrades; i++) {
        
        scanf("%d",&grade);
        sum = sum + grade;
        
    }
    
    average = (double)sum/noOfGrades;
    
    printf("%.2lf",average);
    return 0;
}

*/


/*
You are building a new home and you have calculated exactly how much cement you need for the foundation. Ideally you'd like to purchase this exact amount of cement, but the store only sells cement in 120-pound bags. Each of these bags costs 45 dollars. Please write a C-program that calculates the cost of the cement you will have to purchase to build your foundation.

Your program should first read a decimal number representing the amount of cement needed (in pounds) for the foundations of your new home. Your program should then display the total cost of the cement bags you have to purchase to have enough cement to build your foundation. To make your program simpler, you are guaranteed that the amount of cement needed will NEVER be a multiple of 120.

Example
Input:
295.8
Output:
135


In this example, you need 295.8 pounds of cement. Since the store only sells cement in increments of 120 pounds, you will need three bags (360 pounds) since 2 bags (240 pounds) is not enough and you cannot buy fractions of a bag. Since bags cost $45 each, the total cost is 45 * 3, or 135 dollars.

Solution:
#include <stdio.h>


int main(void) {
    
    double amtOfCement, sizeOfBag = 120, costPerBag = 45;
    int numOfBags, totalCost;
    
    scanf("%lf", &amtOfCement);
    numOfBags = (int)(amtOfCement / sizeOfBag) + 1;
    totalCost = numOfBags * costPerBag;
    printf("%d", totalCost);
    
    return 0;
}
*/
