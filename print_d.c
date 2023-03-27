#include "main.h"
/**
 *
*/
int print_digit(va_list i)
{
	int a[10];
	int j = 1, m = 1000000000, n, sum = 0, counter = 0;
	char k;

	n = va_arg(i, int);
	if (n < 0)
	{
		n *= -1;
		k = '-';
		write(1, &k,1);
		counter++;
	}
	a[0] = n / m;

	for (; j < 10; j++)
	{
		m /= 10;
		a[j] = (n / m) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		sum += a[j];
		if (sum != 0 || j == 9)
		{
			k = ('0' + a[j]);
			write(1, &k, 1);
			counter++;
		}
	}
	va_end(i);
	return (counter);
}
