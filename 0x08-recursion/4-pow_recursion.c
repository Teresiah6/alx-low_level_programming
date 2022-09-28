#include "main.h"
/**
 * _pow_recursion - entry point
 * @x: first int
 * @y: second int
 * Return: return @x^@y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
