#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: The number of elements.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory.
 *If nmemb or size is 0, returns NULL.
 *If malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

for (i = 0; i < nmemb * size; i++)
ptr[i] = 0;

return (ptr);
}
