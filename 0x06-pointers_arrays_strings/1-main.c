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
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
char s1[98] = "Hello ";
char s2[] = "World!\n";
char *ptr;

print_string(s1);
print_string(s2);

ptr = _strncat(s1, s2, 1);
print_string(s1);
print_string(s2);
print_string(ptr);

ptr = _strncat(s1, s2, 1024);
print_string(s1);
print_string(s2);
print_string(ptr);

return (0);
}
