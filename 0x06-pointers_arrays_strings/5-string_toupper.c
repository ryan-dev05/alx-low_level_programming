#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @a: pointer
 * Return: a
 */

char *string_toupper(char *a)
{
	int w;

	w = 0;
	while (a[w] != '\0')
	{
		if (a[w] >= 'a' && a[w] <= 'z')
			a[w] = a[w] - 32;
		w++;
	}
	return (a);
}
