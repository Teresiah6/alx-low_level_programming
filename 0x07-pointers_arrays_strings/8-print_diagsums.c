#include "main.h"
/**
 * print_diagsums - entry point
 * @size:
 * @a:
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;


	for (i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
			if(a[i] == a[j])
			{
				sum = [i + j];
			}
		}

		sum++;
	}

	_putchar(sum);
}
