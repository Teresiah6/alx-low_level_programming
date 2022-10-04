#include "main.h"
#include <stdlib.h>
/**
 * *create_array - create [] of chars
 * @size: size of array
 * @c: character being initialized
 * Return:char
 */
char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if ((size = 0) || (m ==0))
	{
		return (0);
	}

	while (size--)
		m[size] = c;

	return (m);
}
