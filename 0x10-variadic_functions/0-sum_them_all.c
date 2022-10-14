#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - entry point
 * @n: unsigned int
 * Return: int sum of vars
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start (ap, n);

	sum = 0;
	/* if (n == 0)
		 return (0);
*/
	 for (i = 0; 1 < n; i++)
		 sum += va_arg (ap, int);

	 va_end (ap);

	 return (sum);

}
