#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
return (elem == 98);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
return (elem > 0);
}

/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
return (elem == 98 || elem == -98);
}

/**
 * print_number - prints an integer
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
_putchar((n % 10) + '0');
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, 2, 3, 4,
5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
int index;

index = int_index(array, 20, is_98);
print_number(index);
_putchar('\n');
index = int_index(array, 20, abs_is_98);
print_number(index);
_putchar('\n');
index = int_index(array, 20, is_strictly_positive);
print_number(index);
_putchar('\n');
return (0);
}
