#include "main.h"
#include <stdio.h>
/**
* print_array - prints an array of integers
* @a: array
* @n: number of elements to print
*/
void print_array(int *a, int n)
{
int i;
i = 0;
while (i < n)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[i]);
i++;
}
printf("\n");
}
