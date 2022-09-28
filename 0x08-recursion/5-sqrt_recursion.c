#include "main.h"
/**
 * _sqrt_recursion - entry point 
 * @n:number to get sqrt of 
 * Return: int sqrt of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if( n == 1)
		return (1);

	return (n * _sqrt_recursion(n - 1));
}
