#include "main.h"
#include <stddef.h> /* Include for NULL */
/**
 * _strstr - locates a substring
 * @haystack: the main string to be examined
 * @needle: the substring to be searched in haystack
 *
 * Return: pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
char *h, *n;

while (*haystack != '\0')
{
h = haystack;
n = needle;

while (*n != '\0' && *haystack == *n)
{
haystack++;
n++;
}
if (*n == '\0')
return (h);
haystack = h + 1;
}
return (NULL);
}
