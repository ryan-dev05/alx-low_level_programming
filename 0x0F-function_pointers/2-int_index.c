#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - outputs if comp is true
 * @array: the array
 * @size: how many elem in array
 * @cmp: points to function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	k = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
		{
			return (k);
		}
	}
	return (-1);
}
