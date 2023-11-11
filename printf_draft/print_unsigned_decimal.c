#include "main.h"

/**
 * print_unsigned_decimal - Print an unsigned integer in decimal format
 * @n: The unsigned integer to be printed
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */

int print_unsigned_decimal(unsigned int n, struct PrintBuffer *pb)
{
	return (print_int_base(n, 10, 0, pb));
}
