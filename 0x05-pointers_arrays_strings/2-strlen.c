#include "main.h"

/**
 *_strlen -  returns the length of a string.
 *Return: returns len
 *@s: sring to be evaluated
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
