#include "function_pointers.h"

/**
 * print_elem_hex - prints an integer in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
_putchar('0');
_putchar('x');
if (elem / 16 > 0)
{
_putchar((elem / 16) + '0');
}
_putchar((elem % 16) + '0');
_putchar('\n');
}
