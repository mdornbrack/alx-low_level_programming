#!/bin/bash

# Compile each .c file to an object file
for file in *.c; do
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c "$file"
done

# Create the static library from the object files
ar rcs liball.a *.o

# Clean up the object files
rm *.o
