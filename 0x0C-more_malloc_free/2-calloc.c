#include <stdlib.h>
#include "main.h"

/**
 * *_memset - has a constant byte
 * @s: area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		s[d] = b;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *www;

	if (nmemb == 0 || size == 0)
		return (NULL);

	www = malloc(size * nmemb);

	if (www == NULL)
		return (NULL);

	_memset(www, 0, nmemb * size);

	return (www);
}
