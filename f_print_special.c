#include "main.h"

/**
 * print_percent - prints a percentage sign
 * @list: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 *
 * Return: number of char printed
 */
int print_percent(va_list list, flag *f)
{
	(void)list; /* Unused list */
	(void)f; /* Unused flag */
	return (_putchar('%'));
}

/**
 * print_S - Non printable characters (0 < ASCII value < 32 or >= 127),
 * are printed this way: \x, followed by the ASCII code value,
 * in hexadecimal (upper case - always 2 characters)
 * @list: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 *
 * Return: number of char printed
 */
int print_S(va_list list, flag *f)
{
	int i, count = 0;
	char *res;
	char *s = va_arg(list, char *);

	(void)f; /* Unused flag */
	if (!s)
		return (_puts("(null)")); /* Null string */

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x"); /* Prints \x */
			count += 2; /* Account for \x */
			res = conv(s[i], 16, 0); /* Convert to HEX */
			if (!res[1])
				count += _putchar('0');
			count += _puts(res);
		}
		else
			count += _putchar(s[i]);
	}
	return (count);
}
