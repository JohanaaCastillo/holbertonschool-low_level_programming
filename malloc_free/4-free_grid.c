#include "main.h"
#include <stdlib.h>

/**
* free_grid  - Function that frees a 2 dimensional
* grid previously created by your alloc_grid function.
*
* @grid: integers
* @height: grid
*
* Return: Success 0
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]); /*first we free the content of the grid*/
	free(grid); /*then we free the entire grid*/
}
