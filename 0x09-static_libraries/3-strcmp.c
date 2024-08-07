#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: less than 0 if s1 is less than s2, 0 if they are equal,
 * greater than 0 if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
