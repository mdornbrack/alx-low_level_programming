#include "variadic_functions.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

void print_number(int number);
void print_separator(const char *separator);

/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
print_number(va_arg(args, int));
if (separator != NULL && i != n - 1)
{
print_separator(separator);
}
}
_putchar('\n');
va_end(args);
}

/**
 * print_number - prints an integer
 * @number: the integer to print
 */
void print_number(int number)
{
if (number < 0)
{
_putchar('-');
number = -number;
}
if (number == 0)
{
_putchar('0');
}
else
{
int num = number;
int div = 1;
while (num > 9)
{
num /= 10;
div *= 10;
}
while (div > 0)
{
_putchar((number / div)+'0');
number %= div;
div /= 10;
}
}
}

/**
 * print_separator - prints the separator
 * @separator: the separator to print
 */
void print_separator(const char *separator)
{
int j = 0;
while (separator[j])
{
_putchar(separator[j]);
j++;
}
}
