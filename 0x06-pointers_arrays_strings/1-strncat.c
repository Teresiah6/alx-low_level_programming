#include "main.h"
/**
 * *_strncat - entry point 
 * @dest: to be added to
 * @src: to add to
 * @n: bytes from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_length;

	for (dest_length = 0; dest[dest_length] != '\0'; dest_length++)
	{
	for (i = 0; i < n && src[i] != '\0'; dest_length++)
	{
		dest[dest_length + 1] = src[i];
	}

	//dest[dest_length + 1] = '\0';
	}

	return (dest);
}
