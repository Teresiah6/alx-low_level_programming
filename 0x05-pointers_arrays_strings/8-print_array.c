#include<stdio.h>
/**
 * print_array - entry point
 * @a: no.of array
 * @n: no. of elements
 * 
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}


	}
	printf("\n");

}
