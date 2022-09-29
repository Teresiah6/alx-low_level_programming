#include "main.h"
/**
 * factorial - return factorial of a number
 * @n: factorial argument
 * Return: an int n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}



	return (n * factorial(n - 1));
}
