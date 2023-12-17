/*
You are teaching a class on C-programming. The topic of your next lecture is libraries (what a coincidence!). You would like to teach about the use of the mathematics library in C. To accomplish this, you have written a program which you intend to discuss with your students during the next class. 

Your program should first read from the user an integer, and next take the square root of that integer and print it out with 8 decimal places. Next, your program should find and print out (on a new line) the mathematical constant e (Euler's constant) with 10 decimal places. To find e, use the mathematical function exp() and note that e = exp(1).

Finally, in order to remind your students how to use the compiler, please print (on a new line) the correct compiler command to link the mathematics library with your program. Note that in the example given below this line needs to be correctly completed. Your program's source code is stored in program.c, and your compilation command should produce an executable titled program.

Example
Input:
2
Output:
1.41421356                                                                      
2.7182818285                                                                    
gcc -std=c11 -Wall -fmax-errors=10 -Wextra (... you need to complete this line correctly ...)
*/

#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * 
 * Description: An activity on use of math library
 */
 
 
int main(void) {
    
    int x;
    double result, e;
    
    scanf("%d", &x);
    result = sqrt(x);
    printf("%.8lf\n", result);
    e = exp(1);
    printf("%.10lf\n", e);
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra program.c -lm -o program");
    
    
    
    
    return 0;
}
/*
You are still teaching that unit on libraries to your students! This time you want to demonstrate how to invoke the JPEG library (libjpeg.so), which can be used to read and write image files in JPEG format (feel free to play around here - this is pretty neat!). 

You ask your students to write a program with source code stored in vizplus.c and which uses the JPEG library. In order to help your students you decide to print out the compilation command for them that creates an executable file called vizplus from vizplus.c along with linking the JPEG library during the translation process. 

Please write a program that prints the necessary compilation command with a simple printf(). Again, your students' source code is provided in vizplus.c. You only need to link the JPEG library and produce an executable file called vizplus.
*/
#include <stdio.h>

int main(void) {
    
    printf("gcc -std=c11 -Wall -fmax-errors=10 -Wextra vizplus.c -ljpeg -o vizplus\n");
    
    return 0;
}