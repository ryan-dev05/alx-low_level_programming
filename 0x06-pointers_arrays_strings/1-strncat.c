#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The maximum number of bytes
 * Return: 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int t;
	int o;

	t = 0;
	while (dest[t] != '\0')
	{
		t++;
	}
	o = 0;
	while (src[o] && (o < n) != '\0')
	{
	dest[t] = src[o];
	t++;
	o++;
	}
	dest[t] = '\0';
	return (dest);
}
