#include "main.h"
/**
 * *leet - entry point
 * @n: string to print 1337
 * Return: return a char
 */
char *leet(char *n)
{
	int x;
	int i;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (x = 0; x <=9; x++)
		{
			if (n[i] == find[x])
			{
				n[i] = replace[x/2];
				x = 9;
			}
		}
	}

	return(n);

}
