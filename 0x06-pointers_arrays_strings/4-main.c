#include "main.h"
/**
* main - check the code
* Return: Always 0.
*/
int main(void)
{
int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
print_array(a, sizeof(a) / sizeof(int));
reverse_array(a, sizeof(a) / sizeof(int));
print_array(a, sizeof(a) / sizeof(int));
return (0);
}
