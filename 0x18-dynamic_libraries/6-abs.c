#include "main.h"
/**
 * _abs - entry point, computes absolute value of r
 *
 * @r: int to absolute number
 *
 * Return: always 0;
 */
int _abs(int r)
{

	if (r >= 0)
	{
		return (r);
	}
	else
	{
		r = r * -1;
		return (r);
	}

	return (0);
}
