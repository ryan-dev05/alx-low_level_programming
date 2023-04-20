#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that add two input
 * @n: parameters passed
 * @...: parameter to calculate them sum
 *
 * Return: if n == 0 - 0
 * otherwise - sum of all parameters.
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int h, add = 0;

	va_start(sum, n);

	for (h = 0; h < n; h++)
	{
		add = add + va_arg(sum, int);
	}

	va_end(sum);

	return (add);
}
