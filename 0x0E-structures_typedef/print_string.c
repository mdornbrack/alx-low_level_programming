#include "main.h"

/**
 * print_string - prints a string
 * @str: the string to print
 *
 * Return: void
 */
void print_string(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
}
