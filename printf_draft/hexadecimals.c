#include "main.h"

/**
 * print_lowercase_hexadecimal - Print an hexa in lowercase
 * @n: The integer to be printed
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */
int print_lowercase_hexadecimal(unsigned int n, struct PrintBuffer *pb)
{
	return (print_int_base(n, 16, 0, pb));
}

/**
 * print_uppercase_hexadecimal - Print an hexa in uppercase
 * @n: The integer to be printed
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */
int print_uppercase_hexadecimal(unsigned int n, struct PrintBuffer *pb)
{
	return (print_int_base(n, 16, 1, pb));
}
