#include "main.h"
/**
 * _strlen - entry point
 *
 * @s: string for which length is to be determined
 *
 * Return: return int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
