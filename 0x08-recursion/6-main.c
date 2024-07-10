#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
int r;

r = is_prime_number(1);
_putchar(r + '0');
_putchar('\n');
r = is_prime_number(1024);
_putchar(r + '0');
_putchar('\n');
r = is_prime_number(16);
_putchar(r + '0');
_putchar('\n');
r = is_prime_number(17);
_putchar(r + '0');
_putchar('\n');
r = is_prime_number(25);
_putchar(r + '0');
_putchar('\n');
r = is_prime_number(-1);
_putchar(r + '0');
_putchar('\n');
r = is_prime_number(113);
_putchar(r + '0');
_putchar('\n');
r = is_prime_number(7919);
_putchar(r + '0');
_putchar('\n');
return (0);
}
