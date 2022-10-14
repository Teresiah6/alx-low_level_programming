#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - entry point prints strings
 * @separator: string to be printed btwn str
 * @n: no. of strings passed
 * return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
			printf("%i\n", i);
	}

	va_end(ap);
}
