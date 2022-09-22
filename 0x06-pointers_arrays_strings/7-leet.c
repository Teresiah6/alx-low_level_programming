#include "main.h"
/**
 * *leet - entry point
 * @str: string to print 1337
 * Return: return a char
 */
char *leet(char *str)
{
	int i;
	int ii;

	char str1[] = "aetol";
	char str1[] = "AETOL";
	char str2[] = "43071";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
		{
			if (str[i] == str1[ii] || str[i] == str1[ii])
			{
				str[i] = str2[ii];
				break;
			}
		}
	}
	return(str);
}
