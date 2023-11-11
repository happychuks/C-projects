#include "main.h"

/**
 * _putchar - Print a character to the stdout.
 * @c: The input character to be written
 * @pb: The PrintBuffer struct to store characters
 *
 * This function appends the character to the PrintBuffer struct.
 * When the buffer is full, it writes the contents to the standard output.
 *
 * Return: On success, the character written is returned.
 * On error, -1 is returned.
 */

char _putchar(char c, struct PrintBuffer *pb)
{
	if (pb->buf_index == WRITE_BUF_SIZE)
	{
		/* Flush the buffer*/
		write(1, pb->buffer, pb->buf_index);
		pb->buf_index = 0;
	}

	pb->buffer[pb->buf_index++] = c;
	return (c);
}
