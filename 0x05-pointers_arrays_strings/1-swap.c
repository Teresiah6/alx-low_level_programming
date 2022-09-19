#include "main.h"
/**
 * swap_int - entry point
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b
	*b = c;

	_putchar(*a);
	_putchar(*b);

}
