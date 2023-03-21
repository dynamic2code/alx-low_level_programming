#include "main.h"
/**
* print_alphabet_x10 - Prints the alphabet 10 times.
*
* Return: Always 0
*/

void print_alphabet_x10(void)
{
int i = 0;
char letter;
while (i <= 9)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
i++;
}
}
