#include "main.h"

/**
 * *cap_string - function that capitalizes all the words of a string
 * @str: The string to be capitalized
 * Return: Pointer of the changed string
 */

char *cap_string(char *str)
{
	int r;

	r = 0;
	while (str[r])
	{
		while (!(str[r] >= 'a' && str[r] <= 'z'))
			r++;

		if (str[r - 1] == ' ' ||
		str[r - 1] == '\t' ||
		str[r - 1] == '\n' ||
		str[r - 1] == ',' ||
		str[r - 1] == ';' ||
		str[r - 1] == '.' ||
		str[r - 1] == '!' ||
		str[r - 1] == '?' ||
		str[r - 1] == '"' ||
		str[r - 1] == '(' ||
		str[r - 1] == ')' ||
		str[r - 1] == '{' ||
		str[r - 1] == '}' ||
		r == 0)
			str[r] -= 32;
		r++;
	}
	return (str);
}
