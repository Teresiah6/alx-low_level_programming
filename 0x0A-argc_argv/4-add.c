#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char* argv[])
{
	int i;
	(void) argc;

	while(argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			/* is not a number */
			if (!isdigit(argv[i]))
			{
				printf("0\n");

			}
			/*if one of the number passed contains symbols not digits*/
			else if (isdigit(argv[argc]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	return (0);

}
