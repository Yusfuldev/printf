#include "main.h"

/**
 * print_char - Prints a character.
 *
 * @c: The character to print.
 *
 * Return: Always 1.
 */
int print_char(va_list c)
{
	char ch = (char)va_arg(c, int);
	int m = 0;

	m += write(1, &ch, 1);
	if (m == -1)
		return (-1);
	return (m);
}
