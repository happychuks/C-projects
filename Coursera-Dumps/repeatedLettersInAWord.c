/*
You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word. Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should iterate through the letters of the word and compare each letter with the one following it. If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again. You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.

 

Examples
Input:
apple
Output:
1
 

Input:
keeper
Output:
1
 

Input:
erroneousnesses
Output:
5
 

Input:
taylor
Output:
0
*/

#include <stdio.h>

int main(void) {
    
    char words[50];
    int count = 0, i=0, n = 0, j;
    
    scanf("%s", words);
    
    while (words[i] != '\0'){ //this count the length of the given word
        i++;
        n++;
    }
        
    for(i = 0; i < n-1; i++) //this traverse the unsorted list (n-1) number of times
    {
        for(j = 0; j < n - 1; j++) 
        {
            if (words[j] > words[j + 1]) //this is the swapping and sorting logic
            {
                int temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }
    
    for (i = 0; i < n-1; i++) //iterate through the sorted word
    {
        if (words[i] == words[i + 1]) //count for when 2 letters are same
        {
            count++;
            
            while (i < n - 1 && words[i] == words[i + 1]) // Skip ahead to avoid counting the same letter again
            {
                i++;
            }
            
        }
        
    }
    printf("%d", count);
    
    return 0;
}