#include <stdio.h>
#include <stdlib.h>



int main()
{
    char myName[] = "Happy Felix Chukwuma";
    /*int myAge = 30;*/
    int myAge;
    printf("Enter your age: ");
    scanf("%d", &myAge);
    printf("Hello world, my name is %s\n", myName);
    printf("I am %d years old", myAge);
    return 0;
}
