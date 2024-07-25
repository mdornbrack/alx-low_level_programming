#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_numbers - Prints numbers followed by a new line.
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
*
* Return: Nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int number;

va_start(args, n);
for (i = 0; i < n; i++)
{
number = va_arg(args, int);
printf("%d", number);
if (separator != NULL && i != n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
