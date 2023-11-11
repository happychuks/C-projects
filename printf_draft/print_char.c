#include "main.h"

/**
 * print_char - Print a character
 * @c: The character to be printed
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */

int print_char(char c, struct PrintBuffer *pb)
{
	/*Cal _putchar to print the character*/
	_putchar(c, pb);

	/*Return 1, indicating that one character was printed*/
	return (1);
}
