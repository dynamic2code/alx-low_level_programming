#include "_putchar.h"
/**
* print_alphabet - Print the alphabet in lowercase.
*
* Return: void.
*/
void print_alphabet(void);

int main(void)
{
  print_alphabet();
}

void print_alphabet(void)
{
char letter = 'a';
while(letter <= 'z')
{
_putchar(letter);
letter ++;
}
_putchar("\n");
}
