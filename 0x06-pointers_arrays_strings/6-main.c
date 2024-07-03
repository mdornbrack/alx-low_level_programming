#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
* main - check the code
* Return: Always 0.
*/
int main(void)
{
char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
char *ptr;
size_t i;

ptr = cap_string(str);
for (i = 0; i < strlen(ptr); i++)
{
_putchar(ptr[i]);
}
_putchar('\n');
return (0);
}
