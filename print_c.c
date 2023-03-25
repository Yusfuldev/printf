#include "main.h"

int print_c(va_list c)
{
	int i = 0;

	char m = (char) va_arg(c, int);
	_putchar(m);
	return (i);
}
