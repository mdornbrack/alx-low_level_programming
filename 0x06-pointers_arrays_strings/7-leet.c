#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: the string to encode.
 *
 * Return: the encoded string.
 */
char *leet(char *str)
{
int i, j;
char *a = "aAeEoOtTlL";
char *b = "4433007711";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (str[i] == a[j])
{
str[i] = b[j];
}
}
}
return (str);
}
