/*
A delivery company has hired you to manage their tracking services division. It is your job to store all of the currently used tracking codes in the company's database. These codes consist of either all integers, all decimal numbers, or all characters. The chief technology officer has warned you that the database is old and has limited space, so you want to determine how much memory the tracking codes will occupy before storing them. You decide to write a program to assist you in this process. 

Your program should first read an integer number indicating how many tracking codes you plan on entering. Next, for each successive tracking code your program should read in the integer length of code followed by a space and then the type of code ('i' for integer, 'd' for decimal, or 'c' for character). Finally your program should print the total amount of space required to store all of the tracking codes (in bytes). If the user enters an incorrect type for any tracking number, the program should print 'Invalid tracking code type' and exit.

Examples
Input:
3
10 i
7 c
12 d 
Output:
143 bytes
 

Input:
2
3 c
20 d
Output:
163 bytes
 
Input:
4
5 i
2 d
10 a
3 c
Output:
Invalid tracking code type 
*/

#include <stdio.h>

int main(void) {
    int n, nlength, totalSpace = 0;
    int x;
    char ntype;
    
    
    scanf("%d", &n);
    for (x = 0; x < n; x++){
        
        //reads user input (length and type)
        scanf("%d %c", &nlength, &ntype);
        
        //calculates total space required
        if (ntype == 'i') {
            totalSpace = totalSpace + (sizeof(int) * nlength);
        }
        if (ntype == 'c') {
            totalSpace = totalSpace + (sizeof(char) * nlength);
        }
        if (ntype == 'd') {
            totalSpace = totalSpace + (sizeof(double) * nlength);
        }
        if (ntype != 'i' && ntype != 'c' && ntype != 'd') {
            printf("Invalid tracking code type\n");
            return 0;
        }

        
    }
    printf("%d bytes\n", totalSpace);
    
    return 0;
}