#include "main.h"
/**
*_memset - fills memory with a constant byte
*@s: the memory area to fill
*@b: the byte to fill with
*@n: the number of bytes to fill
*
*Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n--)
*s++ = b;
return (ptr);
}
