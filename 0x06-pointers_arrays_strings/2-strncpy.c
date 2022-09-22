#include "main.h"
/**
 * *_strncpy - entry point 
 * @dest: destination string 
 * @src: copying string
 * @n: what to copy
 * Return: char;
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';


	return(dest);
}
