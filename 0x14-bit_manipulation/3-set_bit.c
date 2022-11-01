#include "main.h"
/**
 * set_bit - set value of a bit to 1
 * @n: unsigned long int
 * @index: index from 0 of bit
 * Return: 1 success -1 fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
