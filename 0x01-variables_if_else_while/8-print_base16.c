#include<stdio.h>
/**
 * main - program that prints all
 *
 * the numbers of base 16 in lowercase
 *
 * Return: always 0;
 */
int main(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (i = 97; i <= 100; i++)
	{
		putchar(i);
	}

	putchar ('\n');

	return (0);
}
