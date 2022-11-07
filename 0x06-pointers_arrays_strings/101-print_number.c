#include "main.h"
/**
 * print_number - entry point
 * @n: input
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;
	int d;
	int c;


	if (n < 0)
	{
		_putchar(45);
		num = n * -1;
	}
	else
		num = n;
	d = num;
	c = 1;

	while (d > 9)
	{
		d = d / 10;
		c *= 10;
	}
	for (; c >= 1; c /= 10)
	{
		_putchar(((n / c) % 10) + 48);
	}

}
