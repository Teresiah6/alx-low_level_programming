#include "main.h"
/**
 * _sqrt_recursion - entry point
 * @n:number to get sqrt of
 * Return: int sqrt of number
 */
int _sqrt_recursion(int n)
{
	int a;
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a < n)
	{
		return (a * _sqrt_recursion(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}

	return (n * _sqrt_recursion(n - 1));
}

