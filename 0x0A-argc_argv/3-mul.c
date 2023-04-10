#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiplies two nums
 *@argc: number of arguments provided
 *@argv: list of argument names
 *Return: 1 on fail 0 on success
 */

int main(int argc, char *argv[])
{
if (argc - 1 < 2)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n",atoi(argv[1]) * atoi(argv[2]));
return (0);
}
}
