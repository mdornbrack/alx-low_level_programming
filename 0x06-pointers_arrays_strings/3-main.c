#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char s1[] = "Hello";
char s2[] = "World";

_putchar(_strcmp(s1, s2) + '0');
_putchar('\n');
_putchar(_strcmp(s2, s1) + '0');
_putchar('\n');
_putchar(_strcmp(s1, s1) + '0');
_putchar('\n');
return (0);
}
