#include "main.h"

/**
 * print_paddress - prints address of input in HEX format
 * @list: va_list arguments from _printf
 *
 * Return: number of char printed
 */
int print_paddress(va_list list)
{
	char *str;
	unsigned long int p = va_arg(list, unsigned long int);

	register int count = 0; /* Return value */

	if (!p)
		return (_puts("(nil)")); /* Null pointer */

	/* Uppercase HEX since we're representing pointers */
	str = conv(p, 16, 0);
	count += _puts(str);
	return (count);
}
