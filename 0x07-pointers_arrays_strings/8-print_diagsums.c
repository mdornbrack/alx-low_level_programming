#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
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
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the start of the matrix
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}

print_number(sum1);
_putchar(',');
_putchar(' ');
print_number(sum2);
_putchar('\n');
}
