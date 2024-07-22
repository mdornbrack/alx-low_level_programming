#include "main.h"

/**
 * print_float - prints a float number
 * @n: the float number to print
 *
 * Return: void
 */
void print_float(float n)
{
int integer_part = (int)n;
float decimal_part = n - integer_part;
int decimal_as_int;

print_number(integer_part);
_putchar('.');
decimal_as_int = (int)(decimal_part * 1000); /* Printing three decimal places */
if (decimal_as_int < 100)
{
_putchar('0');
}
if (decimal_as_int < 10)
{
_putchar('0');
}
print_number(decimal_as_int);
}
