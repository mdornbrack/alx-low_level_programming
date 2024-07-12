#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: the byte to fill the memory with
 * @n: the number of bytes to be filled
 * Return: the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}