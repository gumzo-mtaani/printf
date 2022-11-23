#include "main.h"

/**
 * print_string - prints a string
 * @list:  va_list args from _printf
 *
 * Return: number of char printed
 */
int print_string(va_list list)
{
	char *s = va_arg(list, char *);

	if (!s)
		s = "(NULL)";
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @list: va_list args from _printf
 *
 * Return: number of char printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
