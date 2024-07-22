#include "dog.h"
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
struct dog my_dog;

init_dog(&my_dog, "Poppy", 3.5, "Bob");

print_string("My name is ");
print_string(my_dog.name);
print_string(", and I am ");
print_float(my_dog.age);
print_string(" - Woof!\n");

return (0);
}
