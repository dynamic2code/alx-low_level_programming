#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **malloc_checked - allocates memory using malloc
 *@d: size to be allocated
 *Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
int *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
else
{
return (p);
}
}
