#include "main.h"

/**
 * conv - converts number and base into strings
 * @num : number to convert
 * @base : base to convert to
 *
 * Return: converted string
 */
char *conv(unsigned int num, int base)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
