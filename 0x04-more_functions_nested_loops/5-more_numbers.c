#include "main.h"
/**
 * more_numbers - entry point
 * Return: returns void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar (j);
		}

		_putchar ('\n');
	}
}
