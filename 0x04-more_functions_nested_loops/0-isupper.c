#include "main.h"
/**
 * _isupper - entru point
 *
 * @c: check if upper
 *
 * Return: either 1 or 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		_putchar (c);
		_putchar (':');
		return (1);
	}
	else 
	{
		_putchar (c);
		_putchar (':');
		return (0);
	}

	_putchar ('\n');

}
