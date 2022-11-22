#include <stdio.h>
#include <stdlib.h>
/**
 * main - print own opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: int 0 success
 */
int main(int argc, char *argv[])
{
	int i;
	int bytes;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[i]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
