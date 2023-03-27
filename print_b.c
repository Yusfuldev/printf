#include "main.h"

/**
 * print_b - prints an unsigned int i binary notation
 * @b: unsigned in to print
 * Return: number of printed digits
 */

int print_b(va_list b)
{
	unsigned int n, num[31];
	int count = 0, i = 0;
	char buf[32];
	char *p = buf;

	n = va_arg(b, unsigned int);
	for (; n != 0; i++)
	{
		num[i] = n % 2;
		n /= 2;
	}

	while (i != 0)
	{
		i--;
		*p++ = num[i] + '0';
		count++;
	}
	write(1, buf, count);
	va_end(b);
	return (count);
}
