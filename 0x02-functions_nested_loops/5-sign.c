#include "main.h"
/**
 * print_sign - entry point
 *
 * @n: prints the sign of a number
 *
 * Return: either 0, 1, or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar ('+');
	}
	else if (n = 0)
	{
		return (0);
		_putchar ('0');
	}
	else
	{
		return (-1);
		_putchar ('-');
	}

}
