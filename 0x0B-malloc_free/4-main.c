#include "main.h"
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
int w, h;

h = 0;
while (h < height)
{
w = 0;
while (w < width)
{
_putchar(grid[h][w] + '0');
if (w < width - 1)
_putchar(' ');
w++;
}
_putchar('\n');
h++;
}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int **grid;

grid = alloc_grid(6, 4);
if (grid == NULL)
{
return (1);
}
print_grid(grid, 6, 4);
grid[0][3] = 98;
grid[3][4] = 402;
print_grid(grid, 6, 4);
free_grid(grid, 4);
return (0);
}
