#include "main.h"
/**
 * _isupper - entry point
 *
 * @c: check if upper
 *
 * Return: either 1 or 
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
	_putchar ('\n');
}
