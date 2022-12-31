#include "main.h"
/**
 * _isupper - entry point
 *
 * @c: check if upper
 *
 * Return: either 1 or 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
