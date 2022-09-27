#include "main.h"
#define NULL 0
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

	for (i = 0; haystack[i] > '\0'; i++)
	{
		for (j = i; haystack[j] > '\0' && needle[j - 1] > '\0'; j++)
		{
			if(haystack[j] != needle[j - i])
				break;
		}

		if (needle[j - i] == '\0')
			return (haystack + i);

	}

	return (NULL);
}
