#include "main.h"
#include <stddef.h>
/**
*_strstr - locates a substring
*@haystack: the string to search
*@needle: the substring to locate
*Return: pointer to beginning of needle in haystack or NULL if no match
*/
char *_strstr(char *haystack, char *needle)
{
char *h, *n;
while (*haystack)
{
h = haystack;
n = needle;
while (*n && *h == *n)
{
h++;
n++;
}
if (!*n)
return (haystack);
haystack++;
}
return (NULL);
}
