#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar rc libmy.a *.o
ranlib libmy.a

# This script creates a static library called liball.a from all .c files in the current directory

# Compile each .c file to a .o file
for file in *.c; do
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c "$file"
done

# Create the static library from the .o files
ar rc liball.a *.o

# Index the library
ranlib liball.a
