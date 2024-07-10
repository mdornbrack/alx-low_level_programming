#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = _pow_recursion(1, 10);
_putchar('0' + r / 10);
_putchar('0' + r % 10);
_putchar('\n');

r = _pow_recursion(1024, 0);
_putchar('0' + r / 1000);
_putchar('0' + (r / 100) % 10);
_putchar('0' + (r / 10) % 10);
_putchar('0' + r % 10);
_putchar('\n');

r = _pow_recursion(2, 16);
_putchar('0' + r / 10000);
_putchar('0' + (r / 1000) % 10);
_putchar('0' + (r / 100) % 10);
_putchar('0' + (r / 10) % 10);
_putchar('0' + r % 10);
_putchar('\n');

r = _pow_recursion(5, 2);
_putchar('0' + r / 10);
_putchar('0' + r % 10);
_putchar('\n');

r = _pow_recursion(5, -2);
if (r == -1)
{
_putchar('-');
_putchar('1');
}
else
{
_putchar('0' + r / 10);
_putchar('0' + r % 10);
}
_putchar('\n');

r = _pow_recursion(-5, 3);
if (r < 0)
{
_putchar('-');
r = -r;
}
_putchar('0' + r / 100);
_putchar('0' + (r / 10) % 10);
_putchar('0' + r % 10);
_putchar('\n');

return (0);
}
