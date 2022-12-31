#include "main.h"
/**
 * *_memcpy - entry point
 * @dest: to be copied to
 * @src: to be copied from
 * @n:bytes of memory to be copied
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0 ; i++, n--)
	{
		dest[i] = src[i];
	}

	return (dest);
}
