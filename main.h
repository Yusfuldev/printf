#ifndef MAIN._H
#define MAIN_H
#include <stdarg.h>
typedef struct print_t
{
        char *t;
        int (*f)(va_list);
        int _putchar(char c);
} print_t;
        int _printf(const char *format, ...);
#endif
