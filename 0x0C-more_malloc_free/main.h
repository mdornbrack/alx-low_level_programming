#ifndef MAIN_H
#define MAIN_H

void *malloc_checked(unsigned int b);
int _putchar(char c);
void print_pointer(void *p);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
void simple_print_buffer(int *buffer, unsigned int size);
int *array_range(int min, int max);

#endif /* MAIN_H */
