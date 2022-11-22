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
	char *m;
	unsigned int pos;

	if ((size == 0))
	{
		return (NULL);
	}

	m = (char *)malloc(size * sizeof(c));

	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		pos = 0;
		while (pos < size)
		{
			*(m + pos) = c;
		}
		return (m);
	}

}
