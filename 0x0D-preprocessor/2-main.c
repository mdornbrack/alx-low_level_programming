#include "main.h"

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Always 0.
 */
int main(void)
{
char *filename = __FILE__;
while (*filename)
{
_putchar(*filename);
filename++;
}
_putchar('\n');
return (0);
}
