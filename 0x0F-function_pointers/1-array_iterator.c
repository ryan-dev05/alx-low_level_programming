#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - outputs array on newline
 * @array: the array
 * @action: pointer to output
 * @size: how many element to output
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int W;

	W = 0;

	if (array != NULL && action != NULL)
	{
		for (W = 0; W < size; W++)
		{
			action(array[W]);
		}
	}
}
