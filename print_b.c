#include "main.h"

/**
 * print_b - prints an unsigned int i binary notation
 * @b: unsigned in to print
 * Return: number of printed digits
 */

int print_b(va_list b)
{
	unsigned int n, num[sizeof(n) * 8], i = 0;
	int count = 0;
	char buf[sizeof(n) * 8 + 1];
	char *p = buf;

	n = va_arg(b, unsigned int);
	for (; i < sizeof(n) * 8; i++)
	{
		num[i] = n % 2;
		n /= 2;
	}

	while (num[i] != '\0')
	{
		i--;
		*p++ = num[i] + '0';
		count++;
	}
	*p = '\0';
	write(1, buf, count);
	va_end(b);
	return (count);
}
