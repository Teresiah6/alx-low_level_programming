#include "main.h"
/**
 * *_strcpy - entry point
 * @dest: destinattion string
 * @src: source string
 * Return: return a char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
