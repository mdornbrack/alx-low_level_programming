#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_elem(int elem);
void print_elem_hex(int elem);
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char c);

#endif /* FUNCTION_POINTERS_H */
