#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the newly allocated space in memory containing s1,
 *followed by the first n bytes of s2, and null terminated.
 *If the function fails, returns NULL.
 *If n is greater or equal to the length of s2, uses the entire string s2.
 *If NULL is passed, treats it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i, j, len1 = 0, len2 = 0;

if (s1 != NULL)
{
for (len1 = 0; s1[len1]; len1++)
;
}

if (s2 != NULL)
{
for (len2 = 0; s2[len2]; len2++)
;
}

if (n >= len2)
n = len2;

concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (j = 0; j < n; j++, i++)
concat[i] = s2[j];

concat[i] = '\0';

return (concat);
}
