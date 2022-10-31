#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string to convert
 * Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int vl = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		vl <<= 1;
		vl += b[i] - '0';
		i++;
	}
	return (vl);
}
