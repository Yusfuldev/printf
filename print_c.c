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
	_putchar(ch);
	return (1);
}
