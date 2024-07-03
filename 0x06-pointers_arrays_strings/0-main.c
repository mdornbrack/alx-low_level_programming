#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char s1[98] = "Hello ";
char s2[] = "World!\n";
char *ptr;
int i;

ptr = _strcat(s1, s2);

for (i = 0; s1[i] != '\0'; i++)
{
_putchar(s1[i]);
}
_putchar('\n');

for (i = 0; s2[i] != '\0'; i++)
{
_putchar(s2[i]);
}
_putchar('\n');

for (i = 0; ptr[i] != '\0'; i++)
{
_putchar(ptr[i]);
}
_putchar('\n');

return (0);
}
