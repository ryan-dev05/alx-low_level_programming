#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - duplicate new memory location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *loc;

	if (str == NULL)
	{
		return (NULL);
	}

	loc = malloc(strlen(str) + 1);

	if (loc == NULL)
	{
		return (NULL);
	}

	strcpy(loc, str);

	return (loc);
}
