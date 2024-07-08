#include "main.h"
#include <stddef.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *s = "hello";
char *f;

f = _strchr(s, 'l');
if (f != NULL)
{
while (*f != '\0')
{
_putchar(*f);
f++;
}
_putchar('\n');
}
return (0);
}
