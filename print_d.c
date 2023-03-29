#include "main.h"
/**
 * print_digit - Prints an unsigned integer
 * @i: digit to print
 * Return: number of printed digits
 */
int print_digit(va_list i)
{
	int n = 0, counter = 0, divisor = 1;

	n = va_arg(i, int);

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		counter++;
	}
	while ((n / 10) >= divisor)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		_putchar((n / divisor) + '0');
		counter++;
		n %= divisor;
		divisor /= 10;

	}
	va_end(i);
	return (counter);
}
