#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - outputs anything
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
		int p = 0;
		char *wrd, *get = "";


		va_list lis;


		va_start(lis, format);


		if (format)
		{
			while (format[p])
			{
				switch (format[p])
				{
					case 'c':
						printf("%s%c", get, va_arg(lis, int));
						break;
					case 'i':
						printf("%s%d", get, va_arg(lis, int));
						break;
					case 'f':
						printf("%s%f", get, va_arg(lis, double));
						break;
					case 's':
						wrd = va_arg(lis, char *);
						if (!wrd)
							wrd = "(nil)";
						printf("%s%s", get, wrd);
						break;
					default:
						p++;
						continue;
				}
				get = ", ";
				p++;
			}
		}

		printf("\n");
		va_end(lis);
	}
