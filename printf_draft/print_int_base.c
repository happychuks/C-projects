#include "main.h"
/**
 * print_int_base - Prints an integer in the specified base
 * @n: The integer to be printed
 * @base: The base (8 for octal, 10 for decimal, 16 for hexadecimal)
 * @_case: Use _case letters for hexadecimal (1) or lowercase (0)
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */
int print_int_base(unsigned int n, int base, int _case, struct PrintBuffer *pb)
{
	char buffer[32]; /*Buffer to store converted integer*/
	char digits[] = "0123456789ABCDEF"; /*Digits used for conversion*/
	int i, j, digit;

	if (base < 2 || base > 16)
		return (0); /* Unsupported base, return 0 characters printed */
	i = 0;
	if (_case == 0 && base == 16)
	{/* If lowercase conversion is requested for hexadecimal */
		for (j = 10; j < 16; j++)
			digits[j] = digits[j] + 32;
	}
	/*Handle the special case when n == 0*/
	if (n == 0)
	{
		_putchar('0', pb);
		return (1);
	}
	while (n != 0)/*Converts the integer to the specified base*/
	{
		digit = n % base;
		buffer[i++] = digits[digit];
		n /= base;
	} /*Print the characters in reverse order to get the correct representation*/
	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j], pb);
	return (i + 1);
}
