
#include <unistd.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts(char *str);
int _putchar(char c);

void _puts(char *str)
{
int l = 0;
while (*(*str + l) != '\0')
{
_putchar(*(*str + l));
l++;
}
_putchar('\n');
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
