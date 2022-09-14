#include "main.h"
/**
 * print_time_tables - entry point
 *
 * @n: argument in print times table
 *
 * Return: no return type
 */
void print_times_table(int n)
{
	int number;
	int multiplyBy;
	int product;

	if (n >= 0 && n <= 15)
	{
		for (number = 0; number <= n; number++)
		{
			_putchar('0');

			for (multiplyBy = 1; multiplyBy <= n; multiplyBy++)
			{
				_putchar (',');
				_putchar (' ');

				product = number * multiplyBy;
				if (product <= 99)
				{
					_putchar (' ');
				}
				if (product <= 9)
				{
					_putchar (' ');
				}
				if (product >= 100)
				{
					_putchar ((product / 100) + '0');
					_putchar ((product / 10) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar ((product / 10) + '0');
				}
				_putchar ((product / 10) + '0');
			}
			_putchar ('\n');
		}
	}
}
