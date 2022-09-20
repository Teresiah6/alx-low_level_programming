#include "main.h"
/**
 * print_array - entry point 
 * Return: void
 */
void print_array(int *a, int n)
{
	int a[n];
	n = 0;

	for (n = 0; a[n] != '\n'; n++)
	{
		printf("%d", a[n]);
		printf(" ,");
	}

}
