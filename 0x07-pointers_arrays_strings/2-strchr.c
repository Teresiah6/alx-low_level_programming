#include "main.h"
#define NULL 0
/**
 * *_strchr - entry point
 * @s: string to search c in
 * @c: char to search for
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
