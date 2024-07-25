#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_char - Prints a char.
* @args: The arguments list.
*/
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
* print_int - Prints an int.
* @args: The arguments list.
*/
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
* print_float - Prints a float.
* @args: The arguments list.
*/
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
* print_string - Prints a string.
* @args: The arguments list.
*/
void print_string(va_list args)
{
char *str = va_arg(args, char *);

if (str == NULL)
{
printf("(nil)");
return;
}
printf("%s", str);
}

/**
* print_all - Prints anything followed by a new line.
* @format: A list of types of arguments passed to the function.
*
* Return: Nothing.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i, j, printed = 0;
const char t_args[] = "cifs";
void (*print_func[])(va_list) = {print_char, print_int, print_float, print_string};

va_start(args, format);
for (i = 0; format && format[i]; i++)
{
for (j = 0; t_args[j]; j++)
{
if (format[i] == t_args[j])
{
if (printed)
printf(", ");
print_func[j](args);
printed = 1;
break;
}
}
}
printf("\n");
va_end(args);
}
