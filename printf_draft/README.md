# 0x11. C - printf

## An ALX team project written by Happy Chukwuma and Adioz Daniel

😇😇

## Tasks

### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

This is a function that produces output according to a format.

* Prototype: ```int _printf(const char *format, ...);```
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* ```format``` is a character string. The format string is composed of zero or more directives. See  ```man 3 printf``` for more detail.
* The following conversion specifiers are handled in this task:
  * ```c``` Prototype: ```int print_char(char c, struct PrintBuffer *pb);```
  * ```s``` Prototype: ```int print_string(char *str, struct PrintBuffer *pb);```
  * ```%``` Prototype: ```int print_percent(struct PrintBuffer *pb);```
* The buffer handling of the C library printf function is not reproduced at this stage
* The flag characters are not handled at this stage
* The field width is not handled at this stage
* Precision is not handled at this stage
* Length is not handled at this stage

### 1. Education is when you read the fine print. Experience is what you get if you don't

This is a function that produces output according to a specified format.

* Prototype: ```int _printf(const char *format, ...);```
* Returns: the number of characters printed
* write output to stdout, the standard output stream
* ```format``` is a character string. The format string is composed of zero or more directives. See  ```man 3 printf``` for more detail.
* The following conversion specifiers are handled in this task:
  * ```d``` Prototype: ```int print_integer(int value, struct PrintBuffer *pb);```
  * ```i``` Prototype: ```int print_integer(int value, struct PrintBuffer *pb);```

### 2. With a face like mine, I do better in print

This function handles the specified format:
* Prototype: ```print_binary(unsigned int n, struct PrintBuffer *pb);```
* Returns: the formatted unsigned decimal output
  * ```b:``` the unsigned int is converted to binary

### 3. What one has not experienced, one will never understand in print
This function handles the specified format below:
  * ```u``` Prototype: ```int print_unsigned_decimal(unsigned int n, struct PrintBuffer *pb);```
  * ```o``` Prototype: ```int print_octal(unsigned int n, struct PrintBuffer *pb);```
  * ```x``` Prototype: ```int print_lowercase_hexadecimal(unsigned int n, struct PrintBuffer *pb);```
  * ```X``` Prototype: ```int print_uppercase_hexadecimal(unsigned int n, struct PrintBuffer *pb);```
* Returns: the formatted specifier output

### 4. Nothing in fine print is ever good news

This Use a local buffer of 1024 chars in order to call ```write``` as little as possible.
Added in ```main.h``` as ```#define WRITE_BUF_SIZE 1024```

### 5. My weakness is wearing too much leopard print
This handles the following specifier
  * ```S``` : prints the string.

### 6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
This function handles the specified format below:
  * ```p``` Prototype: ```int print_address(unsigned long n, struct PrintBuffer *pb);```

### 13. Print is the sharpest and the strongest weapon of our party
This function prints the string in reverse
  * ```r```: Prototype: ```int print_strev(char *str, struct PrintBuffer *pb);```

### 14. The flood of print has turned reading into a process of gulping rather than savoring
This function converts and prints the string in rot13'ed format
  * ```R```: Prototype: ```int print_rot13(char *str, struct PrintBuffer *pb);```


* This task is developed without emphasis on the buffer handling of the C library printf function, this puts an exception that it may be handled in one way or another, or completely ignored.
* This task is developed without emphasis on handling the flag characters, this puts an exception that it may be handled in one way or another, or completely ignored.
* This task is developed without emphasis on handling field width, this puts an exception that it may be handled in one way or another, or completely ignored.
* This task is developed without emphasis on handling precision, this puts an exception that it may be handled in one way or another, or completely ignored.
* This task is developed without emphasis on handling the length modifiers, this puts an exception that it may be handled in one way or another, or completely ignored.

## Copyright protected (c) 2023

* Though this is a public repo, All rights are reserved
* This software is the property of the two contributors and is protected by copyright laws.
* Thus, Unauthorized reproduction or distribution of this software, or any portion of it, may result to:
  * Severe civil and criminal penalties.
  * Prosecution to the maximum extent possible under the law.
* This software is a sole effort of the two contributors for educational purposes only.
* It does not constitute any works from any other contributor(s) or author(s).

### Disclaimer

* This software can only be manipulated or checked, otherwise reviewed by **Alx Team**
**Thank you for finding interest to check out our awesome project**
