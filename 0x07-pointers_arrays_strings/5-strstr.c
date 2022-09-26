#include "main.h"
/**
 * *_strstr - entry point
 * @haystack: string to search
 * @needle: searching for
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0;haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if(haystack[i] == needle[j])
				return(haystack + i);
		}

	}
	if (needle[j] == '\0')
		break;

	return(0);
}
