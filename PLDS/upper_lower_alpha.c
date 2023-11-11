#include <stdio.h>
#include <time.h>

/*this program prints uppercase followed by lowercase of each alphabets using do while loop*/
int main() {
    
    char upperCase = 'A';
    char lowerCase = 'a';

    do 
    {
    putchar(upperCase);
    putchar(lowerCase);
    upperCase++;
    lowerCase++;
    putchar(' ');
    }
    while (upperCase <= 'Z');
    
    return 0;
}

/*  Using While Loop
    char upperCase = 'A';
    char lowerCase = 'a';
    
    while (upperCase <= 'Z')
    {
    putchar(upperCase);
    putchar(lowerCase);
    upperCase++;
    lowerCase++;
    putchar(' ');

    } */


/* Using For loop
    char upperCase = 'A';
    char lowerCase = 'a';
    
    for (upperCase, lowerCase; upperCase <= 'Z' && lowerCase <= 'z'; upperCase++ && lowerCase++)
    {
        putchar(upperCase);
        putchar(lowerCase);
        putchar(' ');
    }
    putchar('\n');
*/

/*
#include <stdio.h>
#include <time.h>

int main() {
    //to generate random number within 65 and 90 with the equivalent letters on ascii
    printf("Hello world \n");
    srand(time(NULL));
    int n = rand() % (90 - 65 + 1) + 65;
    printf("Random n is: %d \n", n);
    return 0;
}
*/