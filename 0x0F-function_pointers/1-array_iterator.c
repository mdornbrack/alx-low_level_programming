#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 * Return: Nothing.
 */
void print_elem(int elem)
{
_putchar(elem + '0');
_putchar('\n');
}

/**
 * print_elem_hex - prints an integer in hexadecimal
 * @elem: the integer to print
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
_putchar('0');
_putchar('x');
_putchar((elem >> 4) + '0');
_putchar((elem & 0xF) + '0');
_putchar('\n');
}

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array to iterate
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
int array[5] = {0, 98, 402, 1024, 4096};

array_iterator(array, 5, &print_elem);
array_iterator(array, 5, &print_elem_hex);
return (0);
}
