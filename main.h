#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
<<<<<<< HEAD
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
=======
typedef struct print_t
{
        char *t;
        int (*f)(va_list);
        int _putchar(char c);
} print_t;
        int _printf(const char *format, ...);
>>>>>>> 0a97429a49eb61a952d7ba807bceb463dcf3cd08
#endif
