#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 * @height: height of array
 *
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **n;

	if (width <= 0 || height <= 0)
		return (NULL);
	n = (int **)malloc(sizeof(int *) * height);
	if (n == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		n[i] = (int *)malloc(sizeof(int) * width);
		if (n[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(n[j]);
			free(n);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			n[i][j] = 0;
		}
	}
	return (n);
}
