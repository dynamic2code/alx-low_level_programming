#include <stdio.h>
/**
 *main -prints the numbers from 1 to 100
 *
 *is_divisible_by_3 -for multiples of three print Fizz
 *Return: 1 if true else 0
 *
 *is_divisible_by_5 -for the multiples of five print Buzz
 *for multiples of both three and five print FizzBuzz
 *
 *@x: ineger to be tested
 */

int is_divisible_by_3(int x);
int is_divisible_by_5(int x);

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (is_divisible_by_3(i) == 1)
{
printf("Fizz ");
}
else if (is_divisible_by_5(i) == 1)
{
printf("Buzz ");
}
else if (is_divisible_by_5(i) == 1 && is_divisible_by_3(i) == 1)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
}
}
/**
 *is_divisible_by_3 -for multiples of three print Fizz
 *Return: 1 if true else 0
 *@x: intager from 1 to 100
 */
int is_divisible_by_3(int x)
{
if (x % 3 == 0)
{
return (1);
}
else
{
return (0);
}
}
/**
 *is_divisible_by_5 -for the multiples of five print Buzz
 *for multiples of both three and five print FizzBuzz
 *Return: 1 if true else 0
 *
 *@x: integer from 1 to 100
 */

int is_divisible_by_5(int x)
{
if (x % 5 == 0)
{
return (1);
}
else
{
return (0);
}
}
