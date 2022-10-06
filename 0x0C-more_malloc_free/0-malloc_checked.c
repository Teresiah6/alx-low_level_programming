#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - allocate memory
 * @b - unsigned int
 * return: pointer to allocated mem
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit (98);
	}

	return (ptr);
}
