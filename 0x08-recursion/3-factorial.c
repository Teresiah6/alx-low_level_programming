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
	else (n >= 0 && n <= 1)
	{
		return 1;
	}

	return i * factorial (n -1);
}
