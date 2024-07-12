#include "main.h"

/**
 * _strncpy - copies a string up to n bytes
 * @dest: the destination buffer
 * @src: the source string
 * @n: the number of bytes to copy
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;

while (*src && n--)
*ptr++ = *src++;
while (n--)
*ptr++ = '\0';
return (dest);
}
