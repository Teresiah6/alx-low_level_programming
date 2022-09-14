#include "main.h"
/**
 * print_last_digit - entry point
 *
 * @r: last digit of no. to be printed
 *
 * Return: always 0
 */
int print_last_digit(int r)
{
	int d;

	d = r % 10;

	if (d < 0)
		d = d * -1;

	_putchar (d + '0');

	return (d);

}
