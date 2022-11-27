#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing characters & their specifiers
 *
 * Description: _printf() calls get_print(), which selects what print function,
 * to call depending on the conversion specifiers contained into fmt
 *
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flag *);	/* var to hold get_print return */
	const char *p;	/* p saves the address in *format */

	va_list arguments;
	flag flags = {0, 0, 0}; /* Initialise to 0 (False) */

	register int count = 0;	/* Return value */

	va_start(arguments, format);

	/* Checks if while(!*format++) is true */
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	/* Checks for string after space */
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++; /* Mv to nxt char aftr % */
			while (get_flag(*p, &flags)) /* Set flags */
				p++; /* Mv to nxt char aftr flag */
			pfunc = get_print(*p);

			/* If not in get_print, print whatever char was inputed */
			count += (pfunc)
				? pfunc(arguments, &flags)
				: _printf("%%%c", *p);
		}
		else
			count += _putchar(*p);
	}
	va_end(arguments);
	return (count);
}
