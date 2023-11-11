#include "main.h"
/**
 * _elif_switch_two - Helper function for handling format specifiers in _elif
 * @format: The format character to handle
 * @args: The va_list containing the arguments
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */

int _elif_switch_two(char format, va_list args, struct PrintBuffer *pb)
{
	int printed_chars = 0;

	if (format == 'b')
	{
		unsigned int n = va_arg(args, unsigned int);

		printed_chars += print_binary(n, pb);
	}
	if (format == 'u')
	{
		unsigned int n = va_arg(args, unsigned int);

		printed_chars += print_unsigned_decimal(n, pb);
	}
	if (format == 'o')
	{
		unsigned int n = va_arg(args, unsigned int);

		printed_chars += print_octal(n, pb);
	}
	if (format == 'p')
	{
		void *ptr = va_arg(args, void *);

		printed_chars += print_address((unsigned long)ptr, pb);
	}
	if (format == 'x')
	{
		unsigned int n = va_arg(args, unsigned int);

		printed_chars += print_lowercase_hexadecimal(n, pb);
	}
	if (format == 'X')
	{
		unsigned int n = va_arg(args, unsigned int);

		printed_chars += print_uppercase_hexadecimal(n, pb);
	}
	return (printed_chars);
}
