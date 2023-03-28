#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints an unsigned int i binary notation
 * @b: unsigned in to print
 * Return: number of printed digits
 */

int print_binary(va_list b)
{
	unsigned int n, num[32];
	int count = 0, i= 0;

	n = va_arg(b, unsigned int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num == NULL)
		return (-1);
	for (; n > 0; i++)
	{
		num[i] = n % 2;
		n /= 2;
	}
	i -=1;
	while (i >= 0)
	{
		_putchar(num[i] + '0');
		i--;
		count++;
	}
	return (count);
}
