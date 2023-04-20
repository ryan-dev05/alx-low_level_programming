#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_number - outputs numbers followed by a new line
 * @...: variable number to be printed
 * @separator: striing between numbers
 * @n: number of integers passed
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int runn;
	va_list num;

	va_start(num, n);

	for (runn = 0; runn < n; runn++)
	{
		printf("%d", va_arg(num, int));

		if (runn != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
