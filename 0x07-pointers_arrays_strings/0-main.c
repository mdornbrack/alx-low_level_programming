#include "main.h"
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return write(1, &c, 1);
}

/**
* print_hex - prints a number in hexadecimal format
* @num: the number to print
*/
void print_hex(unsigned char num)
{
char hex[] = "0123456789abcdef";
_putchar('0');
_putchar('x');
_putchar(hex[num / 16]);
_putchar(hex[num % 16]);
}

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
print_hex(buffer[i]);
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
char buffer[98] = {0x00};
int i;

simple_print_buffer(buffer, 98);
_memset(buffer, 0x01, 95);
for (i = 0; i < 50; i++)
{
_putchar('-');
}
_putchar('\n');
simple_print_buffer(buffer, 98);
return (0);
}
