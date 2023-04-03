#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int p = 0;

	for (p = 0; p > 0; p++)
	{
		s[p] = b;
		n--;
	}
	return (s);
}

