#include "main.h"
/**
 * print_most_numbers - entry point
 *
 * @i: prints no.s 0 to 9 less 2 & 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i != 2) && (i != 4))
		{
			continue;
		}

		else
			break;

		_putchar (i);
			
	}

	_putchar ('\n');
}
