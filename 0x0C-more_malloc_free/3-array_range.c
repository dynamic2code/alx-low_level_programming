#include <stdlib.h>
/**
 **array_range - creates an array of integers
 *@min: minimum number
 *@max: maximum number
 *
 *Return: pointer to the arrray on success or NULL on fail
 */
int *array_range(int min, int max)
{
int *my_array;
int count, i;

if (min > max)
{
return (NULL);
}
count = max - min;

my_array  = malloc(sizeof(int) * count + 1);

if (my_array == NULL)
{
return (NULL);
}
for (i = 0; i < count && min <= max; i++, min++)
*(my_array + i) = min;
return (my_array);
}
