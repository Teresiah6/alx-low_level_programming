#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of args
 * @argv- argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int result;
	int arg1;
	int arg2;
	char i;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);


	f = get_op_func(argv[2]);

/*operator is none of listed ones*/
	if (!f)
	{
		printf("Error\n");
		exit(99);

	}
	i = *argv[2];
/* make sure you are not dividing or modulus with 0 */
	if ((i == '/' || i == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = f(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
