#include <stdio.h>
/**
 *main -  adds positive numbers
 *@argc: number of arguments
 *@argv: list of numbers to be added
 *
 * @sum: sum of numbers
 * @i: to set to first argument for for loop
 * @j: to set to first for for loop
 * 
 *Return: (0)
 */

int main(int argc, char *argv[])
{
int sum = 0;
int i;
int j = 1;
if(argc == 1)
{
printf("0\n");
}
for(i=1; i < argc; i++)
{
if(!isdigit(i))
{
printf("Error\n");
return(1);
}
}

while (*argv[j] != "/0")
{
sum =+ *argv[j];
j++;
}

}