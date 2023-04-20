#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - gives a string followed by a new line
 * @...: number of string to be printed
 * @separator: string to be printed btwn string
 * @n: number of string passed
 * Description: if separator is NULL its not printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *wrd;

	unsigned int k;

	va_start(arg, n);
	for (k = 0; k < n; k++)
	{
		wrd = va_arg(arg, char *);

		if (wrd == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", wrd);
		}
		if (separator != NULL && k != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);

	printf("\n");

}
