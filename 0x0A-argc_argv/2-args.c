#include <stdio.h>

/**
 *main - prints all arguments provided
 *@argc: number of arguments provided
 *@argv: list of arguments
 *Return: (0)
 */

int main(int argc, char *argv[])
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
