#include <stdlib.h>
#include "main.h"

/**
 * array_range - forms array of integers
 * @min: minimum of values stored
 * @max: maximum of value stored and number of element
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *run;
	int k, scale;

	if (min > max)
		return (NULL);

	scale = max - min + 1;

	run = malloc(sizeof(int) * scale);

	if (run == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		run[k] = min++;

	return (run);
}
