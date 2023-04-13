#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - gets memory using
 * @b: number of bytes
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *aaa;

	aaa = malloc(b);

	if (aaa == NULL)
		exit(98);

	return (aaa);
}
