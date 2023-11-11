#include "main.h"

/**
 * print_string - Print a string
 * @str: The input string to be printed
 * @pb: The PrintBuffer struct to store characters
 * Return: The number of characters printed
 */

int print_string(char *str, struct PrintBuffer *pb)
{
	/*
	 * Calls _print_str function to print the string
	 * and return the number of characters printed
	 */
	return (_print_str(str, pb));
}
