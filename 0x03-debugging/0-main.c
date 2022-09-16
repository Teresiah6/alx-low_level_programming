#include "main.h"
/**
 * positive or negative - entry point
 *
 * @i : checks if + or -
 *
 * Return: always 0
 */
int main()
{
	int i; 

	if (i > 0)
	{
		printf ("%i is positive\n", i);
	}
	else  if (i < 0)
	{
		printf ("%i is negative\n", i);
	}
	else 
	{
	       printf("%i is zero\n", i);
	}

	return (0);
}
