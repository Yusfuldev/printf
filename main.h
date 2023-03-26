#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
/*int print_str(va_list str);*/

typedef struct list_t
{
	char *t;
	int (*f)(va_list);
} list;

int _printf(const char *format, ...);

#endif

