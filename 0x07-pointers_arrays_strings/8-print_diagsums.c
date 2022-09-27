#include "main.h"
/**
 * print_diagsums - entry point
 * @size: 2d array to find sum for
 * @a: size of an array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;


	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i -1];
		a += size;
	}

	_putchar(sum1);
	_putchar(sum2);
}
