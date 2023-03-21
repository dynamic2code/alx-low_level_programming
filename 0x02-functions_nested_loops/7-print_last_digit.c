#include "main.h"
/**
* print_last_digit - Prints the last digit
* of a number.
*
* @n: input number as an integer.
*
* Return: last digit.
*/

int print_last_digit(int n)
{
int last_number;

last_number = n % 10;
if (last_number < 0)
{
_putchar(-last_number + 48);
return (-last_number);
}
else
{
_putchar(last_number + 48);
return (last_number);
}
}
