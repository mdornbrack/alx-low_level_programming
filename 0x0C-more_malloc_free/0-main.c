#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char *c;
int *i;
float *f;
double *d;

c = malloc_checked(sizeof(char) * 1024);
print_pointer((void *)c);
_putchar('\n');
i = malloc_checked(sizeof(int) * 402);
print_pointer((void *)i);
_putchar('\n');
f = malloc_checked(sizeof(float) * 100000000);
print_pointer((void *)f);
_putchar('\n');
d = malloc_checked(INT_MAX);
print_pointer((void *)d);
_putchar('\n');
free(c);
free(i);
free(f);
free(d);
return (0);
}
