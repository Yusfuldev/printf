#include "main.h"
#include <unistd.h>
int (*handler(const char *format))(va_list)
{
	int i = 0;
	list l[] = {
		{"c", print_char},
	};
	for (; l[i].t != NULL; i++)
	{
		if (*l[i].t == *format)
			break;
	}
	return (l[i].f);
}
int _printf(const char *format, ...)
{
	va_list c;
	int (*f)(va_list);
	unsigned int i = 0, counter = 0;

	if (format == NULL)
		return (-1);

	va_start(c, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			write(1, &format[i++], 1);
			counter++;
		} else
		{
			if (format[i + 1] == '%')
			{
				write(1, &c, 1);
				i += 2;
				counter++;
				continue;
			} else
			{
				f = handler(&format[i + 1]);
				if (f == NULL)
					return (-1);
				i += 2;
				counter += f(c);
			}
		}
		i++;
	}
	va_end(c);
	return (counter);
}
