#include "main.h"
/**
* _strcmp - compare two strings
* @s1: first string
* @s2: second string
* Return: less than 0 if s1 is less than s2, 0 if they're equal,
* more than 0 if s1 is greater than s2
*/
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2 && *s1 != '\0')
{
s1++;
s2++;
}
return (*s1 - *s2);
}
