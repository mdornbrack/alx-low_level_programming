#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;

while (*src)
*ptr++ = *src++;
*ptr = '\0';
return (dest);
}
