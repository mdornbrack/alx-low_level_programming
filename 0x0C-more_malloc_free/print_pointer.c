#include "main.h"

/**
 * print_pointer - prints a pointer address in hexadecimal format
 * @p: The pointer to print
 *
 * Return: Nothing.
 */
void print_pointer(void *p)
{
unsigned long int addr = (unsigned long int)p;
char hex[16] = "0123456789abcdef";
int shift;
int started = 0;

_putchar('0');
_putchar('x');
for (shift = (sizeof(void *) * 8) - 4; shift >= 0; shift -= 4)
{
int digit = (addr >> shift) & 0xF;
if (digit || started || shift == 0)
{
_putchar(hex[digit]);
started = 1;
}
}
}
