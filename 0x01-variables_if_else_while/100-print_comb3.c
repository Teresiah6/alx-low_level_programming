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
		for (num2 = 0; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if(num2 == 0)
			{
				break;
			}


			if (num1 == 8 && num2 == 9)
				continue;
			putchar(',');
		}
	}

	putchar('\n');

	return (0);

}
