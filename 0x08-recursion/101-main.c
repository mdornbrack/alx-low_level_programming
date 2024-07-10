#include "main.h"
#include "_putchar.h" /* Ensure you have this header for the _putchar prototype */

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = wildcmp("main.c", "*.c");
_putchar(r + '0');
_putchar('\n');
r = wildcmp("main.c", "m*a*i*n*.*c*");
_putchar(r + '0');
_putchar('\n');
r = wildcmp("main.c", "main.c");
_putchar(r + '0');
_putchar('\n');
r = wildcmp("main.c", "m*c");
_putchar(r + '0');
_putchar('\n');
r = wildcmp("main.c", "ma********************************c");
_putchar(r + '0');
_putchar('\n');
r = wildcmp("main.c", "*");
_putchar(r + '0');
_putchar('\n');
r = wildcmp("main.c", "***");
_putchar(r + '0');
_putchar('\n');
r = wildcmp("main.c", "m.*c");
_putchar(r + '0');
_putchar('\n');
r = wildcmp("main.c", "**.*c");
_putchar(r + '0');
_putchar('\n');
r = wildcmp("main-main.c", "ma*in.c");
_putchar(r + '0');
_putchar('\n');
r = wildcmp("main", "main*d");
_putchar(r + '0');
_putchar('\n');
r = wildcmp("abc", "*b");
_putchar(r + '0');
_putchar('\n');
return (0);
}
