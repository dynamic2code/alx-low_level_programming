#include <stdio.h>
/**
* main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
*
* Return: Always 0.
*/

int main() {
    int n = 50, i;
    unsigned long long first = 1, second = 2, fib;

    printf("%llu, %llu", first, second);

    for (i = 3; i <= n; i++) {
        fib = first + second;
        printf(", %llu", fib);
        first = second;
        second = fib;
    }

    printf("\n");
    return 0;
}
