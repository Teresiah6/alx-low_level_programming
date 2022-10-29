#include "main.h"
/**
 * print_number - entry point
 * @n: number to print
 * Return: always void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar ('-');
		_putchar (n);
	}

	if ((n / 10) > 0)
		_putchar (n / 10);

	_putchar ((n % 10) + '0');
}
