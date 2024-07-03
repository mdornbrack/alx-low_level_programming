#include "main.h"
/**
 * print_string - prints a string using _putchar
 * @str: the string to print
 */
void print_string(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
_putchar('\n');
}

/**
 * print_hex - prints a string in hexadecimal format
 * @str: the string to print
 * @len: length of the string
 */
void print_hex(char *str, int len)
{
int i;

for (i = 0; i < len; i++)
{
if (i % 10 == 0 && i > 0)
{
_putchar('\n');
}
else if (i % 10 != 0)
{
_putchar(' ');
}
_putchar("0123456789abcdef"[str[i] / 16]);
_putchar("0123456789abcdef"[str[i] % 16]);
}
_putchar('\n');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char s1[98];
char *ptr;
int i;

for (i = 0; i < 98 - 1; i++)
{
s1[i] = '*';
}
s1[i] = '\0';
print_string(s1);
ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
print_string(ptr);
print_string(s1);
ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
print_string(ptr);
print_string(s1);
print_hex(s1, 98);
return (0);
}
