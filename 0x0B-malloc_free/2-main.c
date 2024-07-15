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

s = str_concat("Betty ", "Holberton");
if (s == NULL)
{
_putchar('f');
_putchar('a');
_putchar('i');
_putchar('l');
_putchar('e');
_putchar('d');
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
