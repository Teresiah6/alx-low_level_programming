#include "main.h"
/**
 * print_to_98 - entry point
 *
 * Return: always 0
 */
void print_to_98(int n)
{
	n = 0;

	while (n <  98)
	{
		_putchar (n);
		n++;
		_putchar (',');
		_putchar (' ');
	}


	while (n >= 98)
	{
		_putchar (n);
		n--;
		_putchar (',');
		_putchar (' ');
	
	}

	n = 98;
	_putchar (n);


}
