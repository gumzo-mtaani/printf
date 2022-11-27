#include "main.h"

/**
 * print_paddress - prints address of input in hex format
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
		return (_puts("nil")); /* Null pointer */

	/* Lowercase hex since we're representing pointers */
	str = conv(p, 16, 1);
	count += _puts("0x"); /* 0x(hex value) */
	count += _puts(str);
	return (count);
}
