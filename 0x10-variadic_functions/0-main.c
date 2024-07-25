#include "variadic_functions.h"
#include "_putchar.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int sum;

sum = sum_them_all(2, 98, 1024);
print_number(sum);
_putchar('\n');
sum = sum_them_all(4, 98, 1024, 402, -1024);
print_number(sum);
_putchar('\n');
return (0);
}
