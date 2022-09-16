#include "main.h"
/**
 * _isdigit - entry point
 *
 * @c: char to check if is a digit
 *
 * Return: either 1 or 0
 */
int _isdigit(int c)
{
	if (( c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar ('\n');
}
