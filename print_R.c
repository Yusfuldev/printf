#include "main.h"
#include <stdlib.h>

/**
 * print_R - Prints a string in rot13 format
 * @R: string to print
 * Return: number of printed characters
 */
int print_R(va_list R)
{
	char *str;
	unsigned int i = 0, j = 0;
	int counter = 0;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (; str[i]; i++)
	{
		for (j = 0; input[j]; j++)
		{
			if (input[j] == str[i])
			{
				_putchar(output[j]);
				counter++;
				break;
			}
		}
		if (!input[j])
		{
			_putchar(str[i]);
			counter++;
		}
	}
	return (counter);
}
