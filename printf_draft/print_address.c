#include "main.h"
/**
 * print_address - Prints the hexadecimal representation of an address
 * @n: The address to be printed
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */
int print_address(unsigned long n, struct PrintBuffer *pb)
{/* Declare variables */
	int leadingZeros, digit, count;
	size_t i;
	unsigned long mask;

	leadingZeros = 0;/* Initialize variables */
	mask = 1UL << ((sizeof(unsigned long) * CHAR_BIT) - 4);
	count = 0;
	count += 2;  /* Account for "0x" prefix. */
	_putchar('0', pb); /* Print '0'. */
	_putchar('x', pb); /* Print 'x'. */
	if (n == 0)
	{/* If the address is 0, print '0'. */
		_putchar('0', pb);
		count++;
	}
	else
	{
		while ((n & mask) == 0 && mask != 0)
		{
			leadingZeros++;
			mask >>= 4; /* Shift the mask to check for leading zeros. */
		}
		for (i = leadingZeros; i < (sizeof(unsigned long) * 2); i++)
		{/* Extract each nibble. */
			digit = (n >> (4 * (sizeof(unsigned long) * 2 - i - 1)) & 0xF);
			_putchar(ADDR(digit), pb); /* Print the hexadecimal digit. */
			count++;
		}
	}
	return (count);
}
