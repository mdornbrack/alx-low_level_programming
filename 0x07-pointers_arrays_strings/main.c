#include "main.h"

void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;
char hex[17] = "0123456789abcdef";

for (i = 0; i < size; i++)
{
if (i % 10 && i != 0)
{
_putchar(' ');
}
if (i % 10 == 0 && i != 0)
{
_putchar('\n');
}
_putchar('0');
_putchar('x');
_putchar(hex[(buffer[i] >> 4) & 0xF]);
_putchar(hex[buffer[i] & 0xF]);
}
_putchar('\n');
}

int main(void)
{
char buffer[98] = {0x00};

simple_print_buffer(buffer, 98);
_memset(buffer, 0x01, 95);
simple_print_buffer(buffer, 98);
return (0);
}
