#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (Success),
 * -1 (Failure), and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 *
 * Return: number of chars written
 */
int _puts(char *str)
{
	/**
	 * Frequently used variables are kept in registers,
	 * & have faster accessibility
	 */
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
