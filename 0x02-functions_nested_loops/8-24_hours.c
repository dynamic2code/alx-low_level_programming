#include "_putchar.h"
/**
* jack_bauer - prints every minute of the day
*
* Return: no return
*/

void jack_bauer(void)
{
int a, b, hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
if (hour % 10 && minute % 10)
{
_putchar('hour');
_putchar(':');
_putchar('minute');
}
else
{
a = 0;
b = 0;
_putchar('a');
_putchar('hour');
_putchar(':');
_putchar('b');
_putchar('minute');
}
}
}
