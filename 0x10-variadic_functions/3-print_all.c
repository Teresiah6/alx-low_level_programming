#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - entry point print anything
 * @format: list all types of args
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	/*int i;*/
	/*int *ptr = &i;*/

	va_start(ap, format);

	if (format != NULL)

	/*	for (i = 0; i < format; i++)
			printf("%p\n",format);
	}
	else*/
		printf("nil\n");

	va_end(ap);
}
