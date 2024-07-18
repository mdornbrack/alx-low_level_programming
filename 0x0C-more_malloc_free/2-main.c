#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
printf("0x%02x", buffer[i]);
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
char *a;

a = _calloc(98, sizeof(char));
if (a == NULL)
{
return (1);
}
strcpy(a, "Best");
strcpy(a + 4, " School !!!");
simple_print_buffer(a, 98);
free(a);
return (0);
}
