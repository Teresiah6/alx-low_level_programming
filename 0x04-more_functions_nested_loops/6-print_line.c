#include "main.h"
/**
 * print line- entry point 
 *
 * @l: number of _ to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int l;
	
	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar ('_');
	}

	_putchar ('\n');
}