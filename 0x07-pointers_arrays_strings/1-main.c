#include "main.h"

/**
* simple_print_buffer - prints buffer in hexa
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
if (buffer[i] < 16)
{
_putchar('0');
}
_putchar("0123456789abcdef"[buffer[i] / 16]);
_putchar("0123456789abcdef"[buffer[i] % 16]);
i++;
}
_putchar('\n');
}

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char buffer[98] = {0};
char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
int i;

simple_print_buffer(buffer, 98);
_memcpy(buffer + 50, buffer2, 10);
for (i = 0; i < 50; i++)
{
_putchar('-');
}
_putchar('\n');
simple_print_buffer(buffer, 98);
return (0);
}
