#include "_putchar.h"
/**
* print_last_digit - Prints the last digit
* of a number.
*
* @n: input number as an integer.
*
* Return: last digit.
*/

int print_last_digit(int n);

int main(void)
{
print_last_digit(int n);
}

int print_last_digit(int n)
{
int last_number;

last_number = n % 10;
return last_number;
}
