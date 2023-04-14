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
if (n >= strlen(s2))
{
n = strlen(s2);
}
char *new;
new = malloc(strlen(s1) + 1 + n)
if (new != NULL)
{
memcpy(new, s1, strlen(s1));
memcpy(new + strlen(s1), s2, n);
new [strlen(s1) + sizeof(char) * n] = '\0';
return (new);
       
}
else if (new == NULL)
{
return (NULL);
}
}
