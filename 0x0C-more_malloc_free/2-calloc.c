#include <stdlib.h>
#include <string.h>
/**
 **_calloc - allocates memory for an array, using malloc
 *@nmenb: number of members
 *@size: size of elements
 *Return: pointer to array on success and Null on fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
if(nmemb == 0 || size == 0)
{
return (NULL);
}
char *my_array;
unsigned int i;
my_array = malloc(size * nmemb);

if(my_array == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
*(my_array + i) = 0;
return ((void *)my_array);
}
