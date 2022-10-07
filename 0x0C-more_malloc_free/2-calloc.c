#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	unsigned int i;

	if (size == 0 || nmemb == 0)
			return (NULL);

	m = malloc(nmemb * size);

	if (m == NULL)
			return (NULL);

	for (i = 0; i < (nmemb *size); i++)
		;
/*		arr[i] = 0;*/

	return (m);
}
