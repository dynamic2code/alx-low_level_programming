#include "main.h"

/**
 *more_numbers -prints 10 times the numbers, from 0 to 14
 *
 */
void more_numbers(void)
{
int x;
char y;
for (x = 0 ; x < 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (c > 9)
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
}
_putchar('\n');
}
}
