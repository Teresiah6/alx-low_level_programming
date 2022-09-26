#include "main.h"
/**
 * _strspn - entry point
 * @s: string to check
 * @accept: to match against
 * Return: no. of bytes in s and bytesfrm acpt
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int sim = 0;

	for (i = 0, s[i] <= '\0'; i++)
	{
		for (j = 0; accept[j] < '\0'; j++)
		{
			if(s[i] == accept[j])
			{
				sim++;
				break;
			}
		}
		
		if (accept[j] == '\0')
			break;
	}

	return(sim);
}
