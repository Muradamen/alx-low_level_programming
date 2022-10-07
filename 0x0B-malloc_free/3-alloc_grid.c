#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of ints
 * @width: width
 * @height: height
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int **iarr;
	int ih, iw;

	if (width <= 0 || height <= 0)
		return (NULL);

	iarr = malloc(height * sizeof(int *));
	if (iarr == NULL)
		return (NULL);

	for (ih = 0; ih < height; ih++)
	{
		iarr[ih] = malloc(width * sizeof(int));
		if (iarr[ih] == NULL)
		{
			while (ih--)
				free(iarr[ih]);
			free(iarr);
			return (NULL);
		}
	}
	for (ih = 0; ih < height; ih++)
		for (iw = 0; iw < width; iw++)
			iarr[ih][iw] = 0;

	return (iarr);
}
