#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: either 1 or 0
 */
int main(int argc, char *argv[])
{
	int mul;
	(void) argc;

	if (argc == 3)
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
