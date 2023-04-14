#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 **string_nconcat - concatenates two strings.
 *@s1 - first string
 *@s2 - second string
 *@n - maximum size needed
 *Return: return NULL if function fail and pointer to new string if successful
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
char *new;
new = malloc(strlen(s1) + 1 + sizeof(char) * n)
if (new != NULL)
{
strcpy(new, s1);
strcat(new, s2);

return (new);
       
}
else if (new == NULL)
{
return (NULL);
}
}
