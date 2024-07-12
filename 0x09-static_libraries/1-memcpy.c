#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination buffer
 * @src: the source memory area
 * @n: the number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *d = dest;
const char *s = src;

while (n--)
*d++ = *s++;
return (dest);
}
