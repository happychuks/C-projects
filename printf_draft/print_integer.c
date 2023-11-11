#include "main.h"

/**
 * print_integer - Print an integer
 * @value: The integer to be printed
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */
int print_integer(int value, struct PrintBuffer *pb)
{
	if (value < 0)
	{
		_putchar('-', pb);  /* Print the negative sign */
		return (1 + print_int_base((unsigned int)(-value), 10, 0, pb));
		/* Print the absolute value and return the number of characters printed */
	}

	/* If the value is non-negative, simply print it in base 10 */
	return (print_int_base((unsigned int)value, 10, 0, pb));
	/* Print the value and return the number of characters printed */
}
