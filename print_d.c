#include "main.h"
/**
 * print_digit - A function that prints an unsigned integer
 * @i: digit to print
 * Return: number of printed digits
 */
int print_digit(va_list i)
{
	char buff[1024];
	char *p = buff;
	int n = 0, counter = 0, divisor = 1;

	n = va_arg(i, int);

	if (n < 0)
	{
		n *= -1;
		*p++ = '-';
		counter++;
	}
	while ((n / 10) >= divisor)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		*p++ =  n / divisor + '0';
		counter++;
		n %= divisor;
		divisor /= 10;

	}
	va_end(i);
	write(1, buff, counter);
	return (counter);
}
