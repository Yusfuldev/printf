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
	int i = 0, counter = 0;
	char *s = va_arg(str, char*);

	if (s == NULL)
		return ("(null)");
	while (s[i] != '\0')
	{
		counter += (write(1, &s[i], 1));
		i++;
	}
	return (counter);
}
