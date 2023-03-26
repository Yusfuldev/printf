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

	if (ch == '\0')
		return ("(null)");

	m += write(1, &ch, 1);
	return (m);
}
