#include<stdio.h>
/**
 * main - program that prints all
 *
 * possible different combinations of 2 digits
 *
 * Return: always 0
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = num1+1; num2 <=9; num2++)
		{
			if(num1 !=num2)
			{
				putchar(num1);
				putchar(num2);

				if(num1 == 8 && num2 ==8)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);

}
