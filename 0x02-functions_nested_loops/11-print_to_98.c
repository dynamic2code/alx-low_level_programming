#include "main.h"
/**
 *print_to_98 - prints all natural numbers from n to 98.
 *@n :the number passed to your function
 *RETURN :returns void
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
	for (; n > 98; n--)
		{
		_putchar('%d',n);
		_putchar(',');
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
		_putchar('%d',n);
		_putchar(',');
		}
	}
	else
	{
	        _putchar('%d',n);
	}
	_putchar('\n');
}
