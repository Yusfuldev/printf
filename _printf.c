#include "main.h"
#include <unistd.h>

/**
 * handler- checks for possible match of format
 * @format: format to check
 * Return: NULL on failure and pointer to function on success
 */

int (*handler(const char *format))(va_list)
{
	int i = 0;
	list l[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_digit},
		{"i", print_i},
		{"b", print_binary},
		{"u", print_unsigned},
		{"R", print_R},
		{"X", print_X},
		{"r", print_r},
		{"o", print_o},
		{"x", print_x},
		{"S", print_S},
		{NULL, NULL}
	};

	for (; l[i].t != NULL; i++)
	{
		if (*l[i].t == *format)
			return (l[i].f);
	}
	return (NULL);
}

/**
 * _printf- produces output according to format
 * @format: input format
 * Return: number of printed character
 */

int _printf(const char *format, ...)
{
	va_list c;
	int (*f)(va_list) = NULL;
	unsigned int counter = 0;

	va_start(c, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1) != '%')
		{
			format++;
			f = handler(format);
			if (*format == '\0')
				return (-1);
			else if (f == NULL)
			{
				format = "(null)";
				_putchar(*format);
			} else
				counter += f(c);
			format++;
		}
		else if (*format == '%' && *(format + 1) == '%')
		{
			format++;
			_putchar(*format);
			counter += 1;
			format++;
		}
		else
		{
			_putchar(*format);
			counter++;
			format++;
		}
	}
	va_end(c);
	return (counter);
}
