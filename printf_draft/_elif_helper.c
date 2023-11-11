#include "main.h"
/**
 * _elif_helper - Helper function for handling format specifiers in _elif
 * @format: The format character to handle
 * @args: The va_list containing the arguments
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */
int _elif_helper(char format, va_list args, struct PrintBuffer *pb)
{
	int printed_chars = 0;

	switch (format)
	{
		case 'c':
		case 's':
		case '%':
		case 'd':
		case 'i':
		case 'R':
		case 'r':
		{
			return (printed_chars += _elif_switch_one(format, args, pb));
		}
		case 'o':
		case 'p':
		case 'b':
		case 'u':
		case 'x':
		case 'X':
		{
			return (printed_chars += _elif_switch_two(format, args, pb));
		}
		default:
		{
			_putchar('%', pb);
			_putchar(format, pb);
			printed_chars += 2;
		}
	}
	return (printed_chars);
}
