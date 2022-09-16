#include "main.h"
/**
 * print_line- entry point
 *
 * @n: number of _ to be printed
 * @l: number of lines
 *
 * Return: void so nothing to return
 */
void print_line(int n)
{
	int l;
	
	if(n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar ('_');

		_putchar('\n');
	}
	else
		_putchar ('\n');
}
