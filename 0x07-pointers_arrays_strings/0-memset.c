#include "main.h"

/**
 **_memset - fill a block of memory with a specific value
 *@s: character to fill
 *@b: constant byte
 *@n: size of memory
 *Returns: a pointer to the memory area s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n-- > 0)
{
*p++ = b;
}
return (s);
}
