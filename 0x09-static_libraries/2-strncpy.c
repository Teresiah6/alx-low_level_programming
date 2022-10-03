#include "main.h"
/**
 * *_strncpy - copy chars fromsrc to dest
 * @dest: destination
 * @src: source
 * @n: number of chars to copy
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
			dest[i] = src[i];

	for ( ; i < n; i++)
			dest[i] = '\0';

	return (dest);
}
