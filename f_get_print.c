#include "main.h"

/**
 * get_print - selects the right print function depending on,
 * the conversion specifier passed to _printf
 * @s: character that holds the conversion specifier
 *
 * Description: the function loops through the structs array func_arr[],
 * to find a match btn the specifier passed to _printf
 * & the first element of the struct, and then returns
 * the approriate printing function
 *
 * Return: a pointer to the matching printing function
 */
int (*get_print(char s))(va_list)
{
	ph func_arr[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'i', print_int},
		{'u', print_unsigned_int},
		{'o', print_octal},
		{'d', print_int},
		{'x', print_hex},
		{'b', print_binary},
		{'X', print_HEX},
		{'S', print_S}
	};

	/* spec keeps count of specifiers */
	int spec = 11;

	register int i;

	for (i = 0; i < spec; i++)
	{
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	}
	return (NULL);
}
