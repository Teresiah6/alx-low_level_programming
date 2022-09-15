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
		return (1);
	}
	else 
	{
		return (0);
	}

}
