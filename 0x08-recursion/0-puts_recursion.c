#include "main.h"

/**
 *_puts_recursion - prints a string, followed by a new line
 *
 *@s: sring to be printed out
 *
 */

void _puts_recursion(char *s)
{
_putchar(*s);
if (*s == '\0')
{
_putchar('\n');
}
_puts_recursion(char *s++);
}
