#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char *concat;

concat = string_nconcat("Best ", "School !!!", 6);
if (concat == NULL)
{
_putchar('f');
_putchar('a');
_putchar('i');
_putchar('l');
_putchar('e');
_putchar('d');
_putchar('\n');
return (1);
}
printf("%s\n", concat);
free(concat);
return (0);
}
