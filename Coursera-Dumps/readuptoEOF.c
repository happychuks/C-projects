#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int N = 0, num, sum = 0;
    double average = 0.0;
    
    FILE * fptr;
    
    fptr = fopen("studentGrades.txt", "r");
    
    while (fscanf(fptr, "%d", &num) != EOF) 
    {
        printf("I read %d from the file. \n", num);
        N++;
        sum += num;
    }
        
    printf("There are %d numbers in the file.\n", N);
    printf("The sum of the numbers read is %d.\n", sum);
    printf("The average is %.2lf", (double) sum / N);
    
    fclose(fptr);
    
    return 0;
}