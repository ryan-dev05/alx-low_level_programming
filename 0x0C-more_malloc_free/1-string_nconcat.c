#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: first string
 * @s2: concatenate string
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	unsigned int q = 0, h = 0, lon1 = 0, lon2 = 0;

	while (s1 && s1[lon1])
		lon1++;
	while (s2 && s2[lon2])
		lon2++;

	if (n < lon2)
		z = malloc(sizeof(char) * (lon1 + n + 1));
	else
		z = malloc(sizeof(char) * (lon1 + lon2 + 1));

	if (!z)
		return (NULL);
	while (q < lon1)
	{
		z[q] = s1[q];
		q++;
	}

	while (n < lon2 && q < (lon1 + n))
		z[q++] = s2[h++];

	while (n >= lon2 && q < (lon1 + lon2))
		z[q++] = s2[h++];
	z[q] = '\0';

	return (z);
}
