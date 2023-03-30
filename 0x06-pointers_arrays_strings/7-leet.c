#include "main.h"

/**
 * *leet - function that encode a string into 1337
 * @a: Input value
 * Return: a
 */

char *leet(char *a)
{
	int k;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "443300771l";

	for (k = 0; a[k] != '\0'; k++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[k] == s1[j])
			{
				a[k] = s2[j];
			}
		}
	}
	return (a);
}
