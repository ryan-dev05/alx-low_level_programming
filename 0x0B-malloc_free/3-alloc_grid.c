#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to form a grid
 * @height: height input
 * @width: width input
 * Return: pointer to dim array
 */

int **alloc_grid(int width, int height)
{
	int p;
	int o;
	int **w;

	p = 0;
	o = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	w = malloc(sizeof(int *) * height);

	if (w == NULL)
	{
		return (NULL);
	}

	for (p = 0; p < height; p++)
	{
		w[p] = malloc(sizeof(int) * width);
		if (w[p] == NULL)
		{
			for (; p >= 0; p--)
				free(w[p]);
			free(w);
			return (NULL);
		}
	}
	for (p = 0; p < height; p++)
	{
		for (o = 0; o < width; o++)
			w[p][o] = 0;
	}
	return (w);
}
