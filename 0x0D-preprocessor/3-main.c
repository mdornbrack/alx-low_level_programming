#include "3-function_like_macro.h"
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int j;

i = ABS(-98) * 10;
j = ABS(98) * 10;

print_number(i);
_putchar(',');
_putchar(' ');
print_number(j);
_putchar('\n');

return (0);
}
