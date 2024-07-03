#include "main.h"
#include <stddef.h> /* Include for size_t */
#include <string.h> /* Include for strlen */

/**
* main - check the code
* Return: Always 0.
*/
int main(void)
{
char str[] = "Look up!\n";
char *ptr;
size_t i;

ptr = string_toupper(str);
for (i = 0; i < strlen(str); i++) /* Change sizeof to strlen to avoid signedness comparison */
{
_putchar(ptr[i]);
}
_putchar('\n');
return (0);
}
