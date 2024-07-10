#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = factorial(1);
print_number(r);
_putchar('\n');
r = factorial(5);
print_number(r);
_putchar('\n');
r = factorial(10);
print_number(r);
_putchar('\n');
r = factorial(-1024);
print_number(r);
_putchar('\n');
return (0);
}
