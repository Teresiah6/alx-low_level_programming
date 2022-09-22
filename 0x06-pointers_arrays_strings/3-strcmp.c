#include "main.h"
/**
 * -strcmp - entry point
 *  @s1: string 1 to compare
 *  @s2: string 2 to compare
 *  Return: an int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
	{
		return(s1[i] - s2[i]);
	}
	}

	return(0);

}
