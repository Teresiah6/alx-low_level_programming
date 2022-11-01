#include "main.h"
/**
 * flip_bits - get one number to another
 * @n: unsigned int n
 * @m: usnigned int long
 * Return" unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count, i = 0;
	unsigned long int current, excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = excl >> 1;
		if (current & 1)
			count++;
	}
	return (count);
}
