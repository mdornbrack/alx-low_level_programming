#include "function_pointers.h"

/**
 * print_name_as_is - Prints a name as is
 * @name: Name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
char *str = "Hello, my name is ";

while (*str)
{
_putchar(*str);
str++;
}
while (*name)
{
_putchar(*name);
name++;
}
_putchar('\n');
}

/**
 * print_name_uppercase - Print a name in uppercase
 * @name: Name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
char *str = "Hello, my uppercase name is ";
unsigned int i;

while (*str)
{
_putchar(*str);
str++;
}

i = 0;
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
{
_putchar(name[i] + 'A' - 'a');
}
else
{
_putchar(name[i]);
}
i++;
}
_putchar('\n');
}

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_name("Bob", print_name_as_is);
print_name("Bob Dylan", print_name_uppercase);
return (0);
}
