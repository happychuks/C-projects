#include "main.h"

/**
 * print_octal - Print an unsigned int in octal format
 * @n: The unsigned integer to be printed
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */

int print_octal(unsigned int n, struct PrintBuffer *pb)
{
	return (print_int_base(n, 8, 0, pb));
}
