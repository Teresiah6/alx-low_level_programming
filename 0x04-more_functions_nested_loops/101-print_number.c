#include "main.h"
/**
 * print_number - entry point
 *
 * Return: always void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar ('_');
		n = -n;
	}
	
	if (n / 10) > 0)
		_putchar ( n / 10);

	_putchar ((n % 10) + '0');
}
