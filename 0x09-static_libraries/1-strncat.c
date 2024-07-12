#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest + _strlen(dest);

while (*src && n--)
*ptr++ = *src++;
*ptr = '\0';
return (dest);
}
