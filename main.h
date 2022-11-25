#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct printHandler - struct to choose the right function,
 * depending on the format specifier passed to c_printf()
 * @c: format specifier
 * @f: callback function to get print function
 */
typedef struct printHandler
{
	char c;

	/* Callback function */
	int (*f)(va_list ap);
} ph;

/* Custom printf */
int _printf(const char *format, ...);

/* Get print function */
int (*get_print(char s))(va_list);

/* Alpha functions */
int print_char(va_list list);
int print_string(va_list list);

/* Num functions */
int print_int(va_list list);
int print_unsigned_int(va_list list);
int count_num(int i);
void print_num(int n);

/* Conversion function */
char *conv(unsigned int num, int base, int lowercase);

/* Base functions */
int print_binary(va_list list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_HEX(va_list list);

/* Special cases function */
int print_percent(va_list list);

/* Write functions */
int _putchar(char c);
int _puts(char *str);

#endif /* MAIN_H */
