#include "main.h"

/**
 * wildcmp - Compares two strings to see if they are identical
 * @s1: The first string to be compared
 * @s2: The second string which can contain the special character '*'
 *
 * Special character '*' can replace any string (including an empty string)
 * Return: 1 if the strings are considered identical, otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s2 == '*')
{
if (*(s2 + 1) == '\0')
return (1);
if (*s1 == '\0')
return (wildcmp(s1, s2 + 1));
return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
}
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
return (0);
}
