#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
int n;

n = _strlen_recursion("Corbin Coleman");
if (n >= 10)
_putchar((n / 10) + '0'); /* Print the tens place */
_putchar((n % 10) + '0'); /* Print the ones place */
_putchar('\n');
return (0);
}
