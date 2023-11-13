#include <stdio.h>

int main() {
    int c;        // variable to store each character read
    int charCount = 0; // variable to store the count of characters
    int lineCount = 0; // variable to store the count of lines

    printf("Enter characters. Press Ctrl+D (Ctrl+Z on Windows) to end the input:\n");

    // Read characters until the end of file (EOF) is encountered
    while ((c = getchar()) != EOF) {
        if( c == '\n')
            lineCount++;
        // Increment the character count for each valid character
        charCount++;
    }

    // Print the total count of characters
    printf("\nTotal characters entered: %d\n", charCount);
    printf("Total number of lines is %d\n", lineCount);

    return 0;
}
