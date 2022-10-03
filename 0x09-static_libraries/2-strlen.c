#include "main.h"
/**
 * _strlen - length of string
 * @s: string whose len to be determined
 * Return: int length of string
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;

	return (i);
}
