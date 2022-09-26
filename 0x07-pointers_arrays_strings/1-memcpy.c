#include "main.h"
/**
 * *_memcpy - entry point
 * @dest: to be copied to 
 * @src: to be copied from
 * @n:bytes of memory to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (int i = 0; i < n  && src[i] !='\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return(dest);
}
