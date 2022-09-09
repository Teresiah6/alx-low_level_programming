#include<stdio.h>
/**
 * main - program that prints alphabet in
 *
 * lowercase excluding q and e
 *
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x ='a'; x <= 'z'; x++)
	{
		if (x == 'q')
			continue;
		else if(x == 'e')
			continue;
	putchar(x);
	}
	
	putchar('\n');

	return (0);
}
