#include "main.h"
/**
 * -strcmp - entry point
 *  @s1: string 1 to compare
 *  @s2: string 2 to compare
 *  Return: an int
 */
int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return(0);
	}
	else if (s1 < s2)
	{
		return(-1);
	}
	else if (s1 > s2)
	{
		return(1);
	}
}
