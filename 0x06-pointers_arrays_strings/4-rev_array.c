#include "main.h"
/**
 * reverse_array - entry point
 * @a: string to reverse
 * @n: no. of elements of array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int half;

	for  (half = n / 2; half > 0; half--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
