#include "main.h"
/**
 * print_triangle - entry point
 *
 * @size: triangle size
 *
 * Return: always void
 */
void print_triangle(int size)
{
	int h;
	int c;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (c = size - h; c > 0; c--)
				_putchar (' ');

			for (c = 0; c < h; c++)
				_putchar ('#');

			if (h == size)
				continue;

			_putchar ('\n');
		}
	}

	_putchar ('\n');

}
