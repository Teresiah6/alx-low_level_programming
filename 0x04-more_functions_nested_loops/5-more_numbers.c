#include "main.h"
/**
 * more numbers - entry point
 *
 * @i: print ten times
 *
 * @j:  prints 0-14
 *
 * Return: returns void
 */
void more_numbers(void)
{
	int i;
	int j;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar (j);

		}

		_putchar ('\n');
	}
}