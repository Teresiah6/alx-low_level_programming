#include "main.h"
/**
 * *_memset - fill mem with constant byte
 * @s: pointer for constant
 * @b: constant
 * @n: max byte
 * Return: @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
