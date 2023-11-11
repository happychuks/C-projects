#include "main.h"

/**
 * print_strev - Prints string in reverse
 * @str: The input string to be printed
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */

int print_strev(char *str, struct PrintBuffer *pb)
{
	int len, sum = 0;

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		for (; len > 0; len--, str--)
			sum += _putchar(*str, pb);
	}
	return (sum);
}
