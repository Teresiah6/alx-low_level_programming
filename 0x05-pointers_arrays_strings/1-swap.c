#include "main.h"
/**
 * swap_int - entry point
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int t = *a;

	*a = *b;
	*b = t;

}
