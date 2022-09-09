#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Program that assigns random
 *
 * number to variable each time it's executed
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n > 0)
	{
		printf("%i is positive\n", n);
	} else if (n < 0)
	{
		printf("%i is negative\n", n);
	} else if (n == 0)
	{
		printf("%i is Zero\n", n);
	}
	return(0);

}
