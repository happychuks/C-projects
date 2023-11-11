#include "main.h"
/**
 * _elif_switch_one - Helper function for handling format specifiers in _elif
 * @format: The format character to handle
 * @args: The va_list containing the arguments
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */

int _elif_switch_one(char format, va_list args, struct PrintBuffer *pb)
{
	int printed_chars = 0;

	if (format == 'c')
	{
		char c = va_arg(args, int);

		printed_chars += print_char(c, pb);
	}
	else if (format == 's')
	{
		char *str = va_arg(args, char *);

		printed_chars += print_string(str, pb);
	}
	else if (format == 'R')
	{
		char *str = va_arg(args, char *);

		printed_chars += print_rot13(str, pb);
	}
	else if (format == 'r')
	{
		char *str = va_arg(args, char *);

		printed_chars += print_strev(str, pb);
	}
	else if (format == '%')
	{
		printed_chars += print_percent(pb);
	}
	else if (format == 'd' || format == 'i')
	{
		int value = va_arg(args, int);

		printed_chars += print_integer(value, pb);
	}
	return (printed_chars);
}
