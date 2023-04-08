#include "main.h"

/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *@dest: memory area
 *@src: memory area
 *@n: number of byts
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;
while (n-- > 0)
{
*p++ = *src++;
}
return (dest);
}
