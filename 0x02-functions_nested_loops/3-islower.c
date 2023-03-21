#include <ctype.h>
#include "_putchar.h"

/**
* _islower - Shows 1 if the input is a
* lowercase character. Another cases, shows 0
*
* @c: The character in ASCII code
*
* Return: 1 for lowercase. 0 for the rest.
*/
int _islower(int c);

int main(void)
{
_islower(int c);
}

int _islower(int c)
{
int c;
if (islower(c))
{
return(1);
}
else
{
return(0);
}
}
