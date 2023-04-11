#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	int z;
	int h;
	char *a;

	z = 0;
	h = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[z] != '\0')
		z++;

	while (s2[h] != '\0')
		h++;
	a = malloc(sizeof(char) * (z + h + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	while (s1[z] != '\0')
	{
		a[z] = s1[z];
		z++;
	}

	while (s2[h] != '\0')
	{
		a[z] = s2[h];
		z++, h++;
	}
	a[z] = '\0';
	return (a);
}
