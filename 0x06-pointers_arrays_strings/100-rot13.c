#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to the string
 * Return: *s
 */

char *rot13(char *s)
{
	int p;
	int x;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRTSUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (p = 0; s[p] != '\0'; p++)
	{
		for (x = 0; x < 52; x++)
		{
			if (s[p] == data1[x])
			{
				s[p] = datarot[x];
				break;
			}
		}
	}
	return (s);
}
