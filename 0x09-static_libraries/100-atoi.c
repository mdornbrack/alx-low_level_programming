#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;

while (*s && (*s < '0' || *s > '9'))
{
if (*s == '-')
sign = -sign;
s++;
}
while (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
s++;
}
return (result * sign);
}
