#include "main.h"

/**
 * print_i - Print an integer
 *
 * @args: A va_list containing a single int argument
 *
 * Return: The number of characters printed
 */
int print_i(va_list args)
{
	int n = va_arg(args, int);
	int digits[10];
	int i, len = 0;
	char buf[11];
	char *p = buf;

	if (n < 0)
	{
		*p++ = '-';
		n = -n;
		len++;
	}

	for (i = 0; n != 0; i++)
	{
		digits[i] = n % 10;
		n /= 10;
	}

	if (i == 0)
	{
		*p++ = '0';
		len++;
	}
	else
	{
		for (i--; i >= 0; i--)
		{
			*p++ = '0' + digits[i];
			len++;
		}
	}

	write(1, buf, len);

	return (len);
}
