#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, const char *src)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0'; j++, i++)
{
dest[i] = src[j];
}
dest[i] = '\0';
return (dest);
}
