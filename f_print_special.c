#include "main.h"

/**
 * print_percent - prints a percentage sign
 * @list: va_list arguments from _printf
 *
 * Return: number of char printed
 */
int print_percent(va_list list)
{
	(void)list;
	return (_putchar('%'));
}
