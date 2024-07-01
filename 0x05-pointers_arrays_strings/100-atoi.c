#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the string to convert
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
int i = 0;
int n = 0;
int sign = 1;

while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
n = n * 10 + (s[i] - '0');
i++;
}
return (n * sign);
}
