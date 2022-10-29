#include "main.h"
/**
 * print_diagonal - entry point
 *
 * @n: draw diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int l;
	int s;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
				_putchar (' ');

			_putchar ('\\');

			if (l == n - 1)
				continue;

			_putchar ('\n');
		}
	}

	_putchar ('\n');
}
