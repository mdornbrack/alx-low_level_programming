#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_all - Prints anything followed by a new line.
* @format: A list of types of arguments passed to the function.
*
* Return: Nothing.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j, printed = 0;
char *str;
const char t_args[] = "cifs";

va_start(args, format);
while (format && format[i])
{
j = 0;
while (t_args[j])
{
if (format[i] == t_args[j] && printed)
{
printf(", ");
break;
}
j++;
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int)), printed = 1;
break;
case 'i':
printf("%d", va_arg(args, int)), printed = 1;
break;
case 'f':
printf("%f", va_arg(args, double)), printed = 1;
break;
case 's':
str = va_arg(args, char *), printed = 1;
if (!str)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
}
i++;
}
printf("\n");
va_end(args);
}
