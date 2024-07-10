#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = _sqrt_recursion(1);
print_number(r);
_putchar('\n');
r = _sqrt_recursion(1024);
print_number(r);
_putchar('\n');
r = _sqrt_recursion(16);
print_number(r);
_putchar('\n');
r = _sqrt_recursion(17);
print_number(r);
_putchar('\n');
r = _sqrt_recursion(25);
print_number(r);
_putchar('\n');
r = _sqrt_recursion(-1);
print_number(r);
_putchar('\n');
return (0);
}
