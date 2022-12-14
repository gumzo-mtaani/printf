#include "main.h"

/**
 * count_num - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 *
 * Return: number of digits
 */
int count_num(int i)
{
	/* Return value */
	unsigned int c = 0;
	unsigned int d;

	if (i < 0)
	{
		d = i * (-1);
		c++; /* Account for the -ve sign */
	}
	else
	{
		d = i;
	}

	while (d != 0)
	{
		d /= 10; /* Get last digit */
		c++; /* Increment counter until (last digit < 0) */
	}
	return (c);
}

/**
 * print_int - prints an integer
 * @list: va_list args from _printf
 * @f: pointer to the struct flags determining
 * if a flag is passed to _printf
 *
 * Return: number of char printed
 */
int print_int(va_list list, flag *f)
{
	int num = va_arg(list, int);
	int c = count_num(num);

	if (f->space == 1 && f->plus == 0 && num >= 0)
		c += _putchar(' ');
	if (f->plus == 1 && num >= 0)
		c += _putchar('+');

	print_num(num);
	return (c);

}

/**
 * print_unsigned_int - prints an unsigned integer
 * @list: va_list of arguments from _printf
 * @f: pointer to the struct flags determining
 * if a flag is passed to _printf
 *
 * Return: number of char printed
 */
int print_unsigned_int(va_list list, flag *f)
{
	unsigned int u = va_arg(list, unsigned int);
	char *str = conv(u, 10, 0);

	(void)f; /* Unused flag */
	return (_puts(str));
}

/**
 * print_num - helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 */
void print_num(int n)
{
	unsigned int nm;

	if (n < 0)
	{
		_putchar('-'); /* -ve sign */
		nm = -n;
	}
	else
	{
		nm = n;
	}

	/* Recursive func to print 10th value */
	if (nm / 10)
		print_num(nm / 10);
	_putchar((nm % 10) + '0');
}
