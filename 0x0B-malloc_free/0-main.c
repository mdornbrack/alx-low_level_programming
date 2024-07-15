#include "main.h"
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hex
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
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
_putchar('0');
_putchar('x');
_putchar((buffer[i] / 16) < 10 ? (buffer[i] / 16) + '0' : (buffer[i] / 16) - 10 + 'a');
_putchar((buffer[i] % 16) < 10 ? (buffer[i] % 16) + '0' : (buffer[i] % 16) - 10 + 'a');
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
char *buffer;

buffer = create_array(98, 'H');
if (buffer == NULL)
{
_putchar('f');
_putchar('a');
_putchar('i');
_putchar('l');
_putchar('e');
_putchar('d');
_putchar(' ');
_putchar('t');
_putchar('o');
_putchar(' ');
_putchar('a');
_putchar('l');
_putchar('l');
_putchar('o');
_putchar('c');
_putchar('a');
_putchar('t');
_putchar('e');
_putchar(' ');
_putchar('m');
_putchar('e');
_putchar('m');
_putchar('o');
_putchar('r');
_putchar('y');
_putchar('\n');
return (1);
}
simple_print_buffer(buffer, 98);
free(buffer);
return (0);
}
