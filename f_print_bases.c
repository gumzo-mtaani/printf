#include "main.h"

/**
 * print_binary - prints a num in base 2
 * @list: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 *
 * Return: number of char printed
 */
int print_binary(va_list list, flag *f)
{
	unsigned int num = va_arg(list, unsigned int);
	char *str = conv(num, 2, 0);

	(void)f; /* Unused flag */
	return (_puts(str));
}

/**
 * print_octal - prints a num in base 8
 * @list: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_octal(va_list list, flag *f)
{
	unsigned int o = va_arg(list, unsigned int);
	char *str = conv(o, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}

/**
 * print_hex - prints a num in base 16 lowercase
 * @list: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 *
 * Return: number of char printed
 */
int print_hex(va_list list, flag *f)
{
	unsigned int x = va_arg(list, unsigned int);
	char *str = conv(x, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0x');
	count += _puts(str);
	return (count);
}

/**
 * print_HEX - prints a num in base 16 uppercase
 * @list: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 *
 * Return: number of char printed
 */
int print_HEX(va_list list, flag *f)
{
	unsigned int X = va_arg(list, unsigned int);
	char *str = conv(X, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0X');
	count += _puts(str);
	return (count);
}
