#include "main.h"

/**
 * print_char - Prints a character.
 *
 * @c: The character to print.
 *
 * Return: Always 1.
 */
int print_char(va_list c)
{
    char ch = (char)va_arg(c, int);

    if (ch == '\0')
        return (0);

    int m = write(1, &ch, 1);
    return (m);
}
