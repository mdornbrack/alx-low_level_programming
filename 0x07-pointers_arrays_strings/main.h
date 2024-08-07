#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>  /* Include for NULL */

int _putchar(char c);
unsigned int _strspn(char *s, char *accept);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

void _puts(char *str);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void print_number(int n);

#endif /* MAIN_H */
