#include<stdio.h>
/**
 * main - program that prints all possible
 *
 * different combinations of 3 digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = '0'; i <'8'; i++)
	{
		for (j = i + 1; j < '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				if ((i != j) != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == '7' && j == '8' && k == '9')
						continue;					
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
