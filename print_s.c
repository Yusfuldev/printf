#include "main.h"
/**
 * print_str - Prints a string.
 *
 * @str: The string to print.
 *
 * Return: number of character printed.
 */
int print_str(va_list str)
{
	int i = 0;
	char *s = va_arg(str, char*);

	if (s == NULL)
		s = "(null)";
	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}
