#include "main.h"
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char *s;
int i;

s = _strdup("ALX SE");
if (s == NULL)
{
_putchar('f');
_putchar('a');
_putchar('i');
_putchar('l');
_putchar('e');
_putchar('d');
_putchar(' ');
_putchar('t');
_putchar('o');
_putchar(' ');
_putchar('a');
_putchar('l');
_putchar('l');
_putchar('o');
_putchar('c');
_putchar('a');
_putchar('t');
_putchar('e');
_putchar(' ');
_putchar('m');
_putchar('e');
_putchar('m');
_putchar('o');
_putchar('r');
_putchar('y');
_putchar('\n');
return (1);
}
for (i = 0; s[i]; i++)
{
_putchar(s[i]);
}
_putchar('\n');
free(s);
return (0);
}
