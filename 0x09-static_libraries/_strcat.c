#include "main.h"
/**
*_strcat - concatenates two strings
*@dest: the destination string
*@src: the source string
*
*Return: pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
while (*dest)
dest++;
while ((*dest++ = *src++))
;
return (ptr);
}
