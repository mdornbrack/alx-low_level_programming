#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar rc libmy.a *.o
ranlib libmy.a
