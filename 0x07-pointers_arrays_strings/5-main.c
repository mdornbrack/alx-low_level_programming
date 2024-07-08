#include "main.h"
#include <stddef.h> /* Include for NULL */
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char *s = "hello, world";
char *f = "world";
char *t;

t = _strstr(s, f);
if (t != NULL)
{
_puts(t);
}
return (0);
}
