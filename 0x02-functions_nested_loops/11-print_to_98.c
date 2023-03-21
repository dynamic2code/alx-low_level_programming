#include "main.h"
/**
 *print_to_98 - prints all natural numbers from n to 98.
 *@n :the number passed to your function
 *RETURN :returns void
 */
void print_to_98(int n)
int
{
if (n >= 98)
{
for (; n > 98; n--)
{
  
_putchar(n + 48);
 _putchar(',');
}
}
else if (n < 98)
{
for (; n < 98; n++)
{
_putchar(n + 48);
 _putchar(',');
}
}
else
{
_putchar(n + 48);
}
_putchar('\n');
}
