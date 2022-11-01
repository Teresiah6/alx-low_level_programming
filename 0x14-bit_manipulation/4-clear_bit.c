#include "main.h"
/**
 * clear_bit - set value of bit to 0
 * @n: long int usnigned
 * @index: index from 0
 * Return: 1 success -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
