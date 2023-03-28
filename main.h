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
int _putchar(char c);
int print_char(va_list c);
int print_str(va_list str);
int print_digit(va_list dig);
int print_i(va_list args);
int print_b(va_list b);
int _printf(const char *format, ...);
int print_unsigned(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);
#endif

