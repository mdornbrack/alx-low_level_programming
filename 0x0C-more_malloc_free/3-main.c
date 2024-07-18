#include "main.h"
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hex
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(int *buffer, unsigned int size)
{
unsigned int i;

i = 0;
while (i < size)
{
if (i % 10)
{
_putchar(' ');
}
if (!(i % 10) && i)
{
_putchar('\n');
}
if (buffer[i] < 10)
{
_putchar('0');
_putchar('0');
}
else if (buffer[i] < 100)
{
_putchar('0');
}
_putchar(buffer[i] / 100 + '0');
_putchar((buffer[i] / 10) % 10 + '0');
_putchar(buffer[i] % 10 + '0');
i++;
}
_putchar('\n');
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int *a;

a = array_range(0, 10);
if (a == NULL)
{
return (1);
}
simple_print_buffer(a, 11);
free(a);
return (0);
}
