#include "main.h"

/**
 * print_binary - prints a num in base 2
 * @list: va_list arguments from _printf
 *
 * Return: number of char printed
 */
int print_binary(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	char *str = conv(num, 2, 0);

	return (_puts(str));
}

/**
 * print_octal - prints a num in base 8
 * @list: va_list arguments from _printf
 *
 * Return: number of char printed
 */
int print_octal(va_list list)
{
	unsigned int o = va_arg(list, unsigned int);
	char *str = conv(o, 8, 0);

	return (_puts(str));
}

/**
 * print_hex - prints a num in base 16 lowercase
 * @list: va_list arguments from _printf
 *
 * Return: number of char printed
 */
int print_hex(va_list list)
{
	unsigned int x = va_arg(list, unsigned int);
	char *str = conv(x, 16, 1);

	return (_puts(str));
}

/**
 * print_HEX - prints a num in base 16 uppercase
 * @list: va_list arguments from _printf
 *
 * Return: number of char printed
 */
int print_HEX(va_list list)
{
	unsigned int X = va_arg(list, unsigned int);
	char *str = conv(X, 16, 0);

	return (_puts(str));
}
