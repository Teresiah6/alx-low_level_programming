#include "main.h"
/**
 * *_strcpy - entry point
 * Return: return a char
 */
char *strcpy(char *dest, char *src)
{
	int i;
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return(dest);
}
