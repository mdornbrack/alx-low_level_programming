#include "main.h"
#include <stddef.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the characters to match
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

while (*s && _strchr(accept, *s++))
count++;
return (count);
}
