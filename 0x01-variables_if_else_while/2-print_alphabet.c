#include<stdio.h>
/**
 * main - program that prints the 
 *
 * alphabet in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char x;
	for (x = 'A'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	
	putchar('\n');

	return (0);

}
