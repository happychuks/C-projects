#include "main.h"

/**
 * print_binary - Print an unsigned int in binary format
 * @n: The unsigned integer to be printed
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */
int print_binary(unsigned int n, struct PrintBuffer *pb)
{
	char buffer[32];
	int i = 0;

	if (n == 0)
	{
		_putchar('0', pb);
		return (1);
	}

	while (n > 0)
	{
		buffer[i] = (n & 1) + '0';
		n >>= 1;
		i++;
	}

	for (i = i - 1; i >= 0; i--)
		_putchar(buffer[i], pb);

	return (i); /*Count of characters printed.*/
}
