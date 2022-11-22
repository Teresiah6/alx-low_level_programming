#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - array
 * @s: elements array
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int i;

	i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	return (i);
}

/**
 * *_strcpy - copy arrays
 * @src: array elements
 * @dest: dest array
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] !=  '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * *_strdup -pointer to new string
 * @str: pointer to string
 * Return: characters
 */
char *_strdup(char *str)
{
	unsigned int size;
	char *m;


/*does string have anything*/
	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}

	_strcpy(m, str);
	return (m);
}
