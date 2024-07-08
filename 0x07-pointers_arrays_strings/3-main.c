#include "main.h"
#include <stddef.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *s = "hello, world";
char *f = "oleh";
unsigned int n;

n = _strspn(s, f);
if (n != 0)
{
_putchar(n + '0');
_putchar('\n');
}
return (0);
}
