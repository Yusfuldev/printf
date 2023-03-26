#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct list_t- match the correct format to print function
 * @f: pointer to print funtion
 * @t: pointer to format
 */
typedef struct list_t
{
	char *t;
	int (*f)(va_list);
} list;

int _printf(const char *format, ...);
int print_char(va_list c);
int print_str(va_list str);

int _printf(const char *format, ...);

#endif

