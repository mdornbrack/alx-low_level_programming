#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
char s1[98] = "Hello ";
char s2[] = "World!\n";
char *ptr;

printf("%s\n", s1); /* Prints "Hello " */
printf("%s", s2);   /* Prints "World!\n" */
ptr = _strcat(s1, s2);
printf("%s", s1);   /* Prints "Hello World!\n" */
printf("%s", s2);   /* Prints "World!\n" */
printf("%s", ptr);  /* Prints "Hello World!\n" */
return (0);
}
