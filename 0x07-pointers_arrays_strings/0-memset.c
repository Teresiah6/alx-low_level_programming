#include "main.h"
/**
 * *_memset - fill with byte
 * @s: pointer to block of memory to fill
 * @n: number of bytes to set value
 * @b: value to set
 * Return: char to be returned
 */
char *_memset(char *s, char b,unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
