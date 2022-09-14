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
		_putchar ('+');
		return (1);
	}
	else if (n == -1)
	{
		_putchar ('0');
		return (1);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}

}
