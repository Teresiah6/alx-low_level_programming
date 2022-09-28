#include "main.h"
/**
 * factorial - return factorial of a number
 * @n: factorial argument
 * return: an int
 */
int factorial (int n)
{
	if (n < 0)
	{
		return -1;
	}


	return n * factorial (n -1);
}
