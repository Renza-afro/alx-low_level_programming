#include "main.h"
#include <stdlib.h>

/**
* free_grid-> frees a 2D alloc_grid method
* @height: height
* @grid: grid
* Return:..
*/

void free_grid(int **grid, int height)
{
int x;
for (x = 0; x < height; x++)
{
free(grid[x]);
}
free(grid);
}
