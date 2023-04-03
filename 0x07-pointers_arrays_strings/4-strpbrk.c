#include "main.h"
/**
 * _strpbrk - Input point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
		int o;

		while (*s)
		{
			for (o = 0; accept[o]; o++)
			{
			if (*s == accept[o])
			return (s);
			}
		s++;
		}

	return ('\0');
}
