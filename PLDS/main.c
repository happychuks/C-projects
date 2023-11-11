#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*  """
    This function does not return due to the "void" data type
    """
void sayHello(char name[], int age)
{
    printf("Hello %s, you are %d years old\n", name, age);
}

int main()
{
    sayHello("Felix", 30);
    sayHello("Happy", 35);
    sayHello("Chukwuma", 60);
    return 0;
}
*/


/*    double cube(double num) """
    Always put a method at the top of the main function before the program can run,
    else, if you want to put the method below, define a prototype of the method, e.g double cube(double sum) at the top of the main function

    """*/
    /*
{
    double result = num * num * num;
    return result;
}

int main()
{
    printf("The cube of the given number is %f \n", cube(2));
}
*/

/* This is a basic calculator function*/

/*
int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &op); /* You have to leave a space before the %c, else the function won't work
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if (op == '+')
    {
        printf("%f", num1 + num2);
    }
    else if (op == '-')
    {
        printf("%f", num1 - num2);
    }
    else if (op == '/')
    {
        printf("%f", num1 / num2);
    }
    else if (op == '*')
    {
        printf("%f", num1 * num2);
    }
    else
    {
        printf("Invalid operator");
    }

    return 0;

}
*/

/*
struct Student
{
    char name[50];
    char major[50];
    int age;
    double cgpa;
};

int main()
{
    struct Student student1;
    strcpy( student1.name, "Happy Chukwuma");
    strcpy( student1.major, "Mechanical Engineering");
    student1.age = 30;
    student1.cgpa = 4.41;
    printf("Your name is %s, you major in %s, you are %d years old and your cgpa is %f\n", student1.name, student1.major, student1.age, student1.cgpa);
    return 0;
}

*/
/*Memory Address, A pointer %p is the data type of the memory address of a variable and it is identified with &{variable}.
    It stores the physical location address of each variable*/
/*int main()
{
    int age = 50;

    char grade = 'A';
    double gpa = 4.41;

    /* These are pointers for the age and grade variables
    int * pAge = &age;
    char * pGrade = &grade;
    double * pGpa = &gpa; *//*

    printf("The memory address for age is: %p,\n while that of grade is: %p.\n", &age, &grade);
}


int main() /* w to write, a to append, r to read
{
    FILE * fpointer = fopen("employeesInfo.txt", "a");
    fprintf(fpointer, "Happy Chukwuma, CTO\nAbigail Alli, BDM\nEloka Chiejina, DevOps Engineer\n");
    fprintf(fpointer, "\nFelix Chukwuma, CEO\nAbigail Chukwuma, GM\n");
    fclose(fpointer);

    return 0;
}


*/

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
