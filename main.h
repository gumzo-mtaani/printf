#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for '+'
 * @space: flag for ' '
 * @hash: flag for '#'
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flag;

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
	int (*f)(va_list ap, flag *f);
} ph;

/* Custom printf */
int _printf(const char *format, ...);

/* Get print function */
int (*get_print(char s))(va_list, flag *);

/* Alpha functions */
int print_char(va_list list, flag *);
int print_string(va_list list, flag *);

/* Num functions */
int print_int(va_list list, flag *);
int print_unsigned_int(va_list list, flag *);
int count_num(int i);
void print_num(int n);

/* Conversion function */
char *conv(unsigned int num, int base, int lowercase);

/* Base functions */
int print_binary(va_list list, flag *);
int print_octal(va_list list, flag *);
int print_hex(va_list list, flag *);
int print_HEX(va_list list, flag *);

/* Pointer function */
int print_paddress(va_list list, flag *);

/* Special cases function */
int print_percent(va_list list, flag *);
int print_S(va_list list, flag *);

/* Write functions */
int _putchar(char c);
int _puts(char *str);

#endif /* MAIN_H */
