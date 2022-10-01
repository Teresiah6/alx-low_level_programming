#include<stdio.h>
#include<stdlib.h>
#include<main.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: either 1 or 0
 */
int main(int argc, char* argv[])
{
	int i;
	int mul = 1;

	if(argc ==2)
	{
		for (i = 1; i == argc; i++)
		{	
			mul *= atoi(argv[i]);
		}

		printf("%i\n", mul);
	}
	else
	{
		return (1);
	}
	return (0);
}
