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
	char *str = conv(num, 2);

	return (_puts(str));
}
