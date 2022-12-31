#include "stdlib.h"
#include "stdio.h"
#include "main.h"
/**
 * div - entry point
 *
 * @a: first paramater in add
 *
 * @b: second paramer in add
 *
 * Return: returns the results of addition
 */
div_t div(int a, int b)
{
	div_t result;
	result.quot = a / b;
	result.rem = a / b;

	if (a >= 0 && result.rem < 0)
	{
		++result.quot;
		result.rem -= b;
	}
	return (result);
}
