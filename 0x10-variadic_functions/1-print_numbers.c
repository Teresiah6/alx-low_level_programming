#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: number of ints passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(ap);
	unsigned int i;

	va_start(ap, n);

	if( separator != NULL)
	{
		for (i =0; i < n; i++)
			printf("%i", i); 
	}

	va_end(ap);
}
