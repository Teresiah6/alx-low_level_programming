#include "main.h"
/**
 * _strlen(char *s) - entry point
 *
 * @s: string for which length is to bev determined
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
