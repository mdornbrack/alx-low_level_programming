#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
_putchar((elem / 10) + '0');
_putchar((elem % 10) + '0');
_putchar('\n');
}
