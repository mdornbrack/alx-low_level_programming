#include "main.h"
/**
*_strspn - gets the length of a prefix substring
*@s: the string to search
*@accept: the bytes to include
*
* Return: the number of accepted bytes
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *a;
while (*s)
{
for (a = accept; *a; a++)
{
if (*s == *a)
{
count++;
break;
}
}
if (*a == '\0')
break;
s++;
}
return (count);
}
