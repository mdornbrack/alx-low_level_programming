#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = is_palindrome("level");
print_number(r);
_putchar('\n');
r = is_palindrome("redder");
print_number(r);
_putchar('\n');
r = is_palindrome("test");
print_number(r);
_putchar('\n');
r = is_palindrome("step on no pets");
print_number(r);
_putchar('\n');
return (0);
}
