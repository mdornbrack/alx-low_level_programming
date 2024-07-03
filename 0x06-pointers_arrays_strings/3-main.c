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
int result;
result = _strcmp(s1, s2);
if (result < 0)
{
_putchar('-');
result = -result;
}
else if (result == 0)
{
_putchar('0');
}
else
{
_putchar('+');
}
_putchar('\n');
result = _strcmp(s2, s1);
if (result < 0)
{
_putchar('-');
result = -result;
}
else if (result == 0)
{
_putchar('0');
}
else
{
_putchar('+');
}
_putchar('\n');
result = _strcmp(s1, s1);
if (result < 0)
{
_putchar('-');
result = -result;
}
else if (result == 0)
{
_putchar('0');
}
else
{
_putchar('+');
}
_putchar('\n');
return (0);
}
