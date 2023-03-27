#include "main.h"
/**
  * print_unsigned- prints an unsigned integer
  * @u: integer to print
  * Return: number of printed digits
  */

int print_unsigned(va_list u)
{
	unsigned int m[10];
	char buff[11];
	char *p = buff;
	unsigned int j = 0,  n, counter = 0;

	n = va_arg(u, unsigned int);

	for (; n > 0; j++)
	{
		m[j] = n % 10;
		n /= 10;
	}
	if (m == 0)
	{
		*p++ = '0';
		counter++;
	}

	while (j > 0)
	{
		j--;
		*p++ =  m[j] + '0';
		counter++;
	}
	va_end(u);
	write(1, buff, counter);
	return (counter);
}
