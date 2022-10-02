#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char* argv[])
{
	int i;
	int d;
	s = 0;

	for (i = 1; i < argc; i++)
	{
		for (d = 0; argv[d][i]; d++)
		{
			if (argv[i][d] < '0' || arg[num][digit] > '9')
			{
				printf("Error\n");
				return (1);

			}
		}

		sum += atoi(argv[i]);
		}
	printf("%d\n", s);

	return (0);

}
