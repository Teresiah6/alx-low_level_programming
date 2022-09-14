#include "main.h"
/**
 * _islower - entry point, int input type and int arg
 *
 * Description: checks for lowercase character and returns diff int
 *
 * Return: either 1 or 0
 */
int _islower(int c)
{
	int c;

	if (c > 96 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
