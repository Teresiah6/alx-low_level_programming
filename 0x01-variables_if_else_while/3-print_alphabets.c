#include<stdio.h>
/**
 * main - program that prints the
 *
 * alphabet in lowercase then upper
 *
 * Return : always 0
 */
int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	

	putchar('\n');


	return (0);
}
