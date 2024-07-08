#include "main.h"

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
* @a: pointer to the first element of the matrix
* @size: size of the matrix
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;
char buffer[20];
int index;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}

/* Convert sum1 to string and print */
index = 0;
if (sum1 < 0)
{
_putchar('-');
sum1 = -sum1;
}
do
{
buffer[index++] = (sum1 % 10) + '0';
sum1 /= 10;
} while (sum1);
while (index)
_putchar(buffer[--index]);

_putchar(',');

/* Convert sum2 to string and print */
index = 0;
if (sum2 < 0)
{
_putchar('-');
sum2 = -sum2;
}
do
{
buffer[index++] = (sum2 % 10) + '0';
sum2 /= 10;
} while (sum2);
while (index)
_putchar(buffer[--index]);

_putchar('\n');
}
