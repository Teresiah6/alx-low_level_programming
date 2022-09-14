#include "main.h"
/**
 * int _islower - entry point
 *
 * Description: checks for lowercase character
 *
 * Return: either 1 or 0
 */
int _islower(int c)
{
	if (c > 96 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
