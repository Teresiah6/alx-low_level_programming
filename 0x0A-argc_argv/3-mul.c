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
	(void) argc;

	int mul;

	if(argc == 3)
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));

		printf("%i\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
