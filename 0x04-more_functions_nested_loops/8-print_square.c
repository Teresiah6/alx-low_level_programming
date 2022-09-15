#include "main.h"
/**
 * print_square - entry point
 *
 * return: always void
 */
void print_square(int size)
{
	int h;
	int w;

	if (size > 0)
	{
		for ( h = 0; h < size; h++)
		{
			for (w = 0; w < size; w++)
				_putchar ('#');
			
			if (h == s -1)
				continue;

			_putchar('\n');
		}
	}

	_putchar ('\n');
}
