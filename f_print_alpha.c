#include "main.h"

/**
 * print_string - prints a string
 * @list:  va_list args from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 *
 * Return: number of char printed
 */
int print_string(va_list list, flag *f)
{
	char *s = va_arg(list, char *);

	(void)f; /* Unused flag */
	if (!s)
		s = "(null)"; /* Null string */
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @list: va_list args from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 *
 * Return: number of char printed
 */
int print_char(va_list list, flag *f)
{
	(void)f; /* Unused flag */
	_putchar(va_arg(list, int));
	return (1);
}
