#include "main.h"
#include <stdio.h>
/**
 * main -entry point
 *
 * Return: always 0
 */
int main(void)
{
	long p = 612852475143;
	long i;
	long d;

	while (i < (p / 2))
	{
		if ((p % 2) == 0)
		{
			p = p / 2;
			continue;
		}

		for (i = 3; i < (p / 2); d = d + 2)
		{
			if ((p % i) == 0)
			{
				p = p / d;
			}
		}

	}
	printf("%ld", p);
	printf("\n");


	return (0);
}
