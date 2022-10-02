#include "main.h"
#include<stdlib.h>
#include <stdio.h>
/**
 * isdigit - check if an integer
 * @d: string to check
 * Return: 1 or 2
 */
int isdigit(char *s)
{
	int i = 0;

	while (d[i] != '\0')
	{
		if (d[i] < '0' || d[i] > '9')
		return (0);
	i++;
	}

	return (1);
}
/**
 * main - entry point
 * @arg: argument count
 * @argc: argument vector
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int coinUsed = 0;
	int coin = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if(argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (isdigit(argv[1]))
	{
		i = atoi (argv[1]);

		while (i > 0 && coin <= 4)
		{
			if (i >= coins[coin])
			{
				i -= coins[coin];
				coinUsed++;
			}
			else 
			{
				coin++;
			}
		}
	}

	printf("%i\n", coinUsed);

	return (0);
}
