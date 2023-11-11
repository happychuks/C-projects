#include "main.h"
/**
 * _printf - The main custom printf function that formats and prints arguments
 * @format: The format string specified in the arguments
 *
 * This function processes arguments and throws them to the stdout
 * using the Buffer Struct
 *
 * @format: The format string is a character that holdhe specifier with a
 * '%' character, and followed by a specific conversion character
 * (e.g., %s for strings, %i for integers)
 *
 * Return: The number of characters printed to the stdout.
 */

int _printf(const char *format, ...)
{/* Number of characters printed to the standard output. */
	int printed_chars;

	va_list args;/*A list of variable arguments. */
	/*struct PrintBuffer - Struct initialization*/
	struct PrintBuffer pb;

	pb.buf_index = 0;
	va_start(args, format);/* Start processing variable arguments.*/
	printed_chars = 0;
	printed_chars = _elif(format, args, &pb);/*Process arguments.*/

	if (pb.buf_index > 0)
	{/* Flush the buffer if there are any remaining characters.*/
		write(1, pb.buffer, pb.buf_index);
		pb.buf_index = 0;/*reset the buffer index to 0*/
	}
	/*End processing variable arguments.*/
	va_end(args);
	return (printed_chars);
}
