#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#define ADDR(x)((x < 10) ? x + '0' : x - 10 + 'a')
#define WRITE_BUF_SIZE 1024
/**
 * struct PrintBuffer - This is the data structure
 * @buffer: A character array used to store characters before printing.
 * @buf_index: An integer representing the current index in the buffer.
 */
struct PrintBuffer
{
	char buffer[WRITE_BUF_SIZE]; /* Character buffer.*/
	int buf_index; /* index in the character buffer.*/
};/* printing functions */
char _putchar(char c, struct PrintBuffer *pb);
int _printf(const char *str, ...);
int print_char(char c, struct PrintBuffer *pb);
int print_string(char *str, struct PrintBuffer *pb);
int print_rot13(char *str, struct PrintBuffer *pb);
int print_strev(char *str, struct PrintBuffer *pb);
int print_integer(int value, struct PrintBuffer *pb);
int print_uppercase_hexadecimal(unsigned int n, struct PrintBuffer *pb);
int print_lowercase_hexadecimal(unsigned int n, struct PrintBuffer *pb);
int print_address(unsigned long n, struct PrintBuffer *pb);
int print_int_base(unsigned int n, int base, int _case,
struct PrintBuffer *pb);
int print_binary(unsigned int n, struct PrintBuffer *pb);
int print_percent(struct PrintBuffer *pb);
int print_octal(unsigned int n, struct PrintBuffer *pb);
int print_unsigned_decimal(unsigned int n, struct PrintBuffer *pb);
int _elif(const char *format, va_list args,
struct PrintBuffer *pb);
int _elif_helper(char format, va_list args, struct PrintBuffer *pb);
int _elif_switch_two(char format, va_list args, struct PrintBuffer *pb);
int _elif_switch_one(char format, va_list args, struct PrintBuffer *pb);
int _print_str(char *str, struct PrintBuffer *pb);
#endif /* MAIN_H */
