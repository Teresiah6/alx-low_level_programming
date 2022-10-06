#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory
 * @b - unsigned int
 * Return: pointer to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
	{
		exit (98);
	}

	return (ptr);
}
