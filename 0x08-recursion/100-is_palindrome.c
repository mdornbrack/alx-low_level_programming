#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - helper function to check if a string is a palindrome.
 * @s: string
 * @start: start index
 * @end: end index
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);

if (len == 0)
return (1);
return (check_palindrome(s, 0, len - 1));
}

/**
 * print_number - prints an integer.
 * @n: integer to be printed
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
print_number(n / 10);
_putchar(n % 10 + '0');
}
