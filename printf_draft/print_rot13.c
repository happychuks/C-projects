#include "main.h"

/**
 * print_rot13 - prints string in rot13 format
 * @str: The input string to be printed
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */

int print_rot13(char *str, struct PrintBuffer *pb)
{
	int i, index;
	int count = 0;

	/*
	 * This array contains the alphabet characters already converted
	 * to rot13 format by shifting each character to 13 positions forward.
	 */
	char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";

	i = 0;
	index = 0;

	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
		    || (str[i] >= 'a' && str[i] <= 'z'))
		{
			index = str[i] - 65;
			count += _putchar(arr[index], pb);
		}
		else
			count += _putchar(str[i], pb);
		i++;
	}
	return (count);
}
