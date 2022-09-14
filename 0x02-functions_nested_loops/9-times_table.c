#include "main.h"
/**
 * times_table - entry point
 *
 * Description: function that prints 9 times table
 *
 * Return: always 0
 */
void times_table(void)
{
	int j;
	int m;
	int ans;


	for (j = 0; j < 10; j++)
	{
		_putchar ('0');

		for (m = 1; m < 10; m++)
		{
			_putchar (',');
			_putchar (' ');

			ans = j * m;

			if (ans <= 9)
				_putchar(' ');
			else
				_putchar ((ans / 10) + '0');

			_putchar ((ans % 10) + '0');

		}
	
		_putchar ('\n');		
	}
}
