#include "main.h"
/**
 *  main - entry point
 *
 *  @i: int numbers to add
 *
 *  @s: sum of i
 *
 *  Return: always 0
 */
int main (void)
{
	int i;
	int s;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			s = s + i;
	}

	_putchar (s);
	_putchar ('\n);

	return (0);
}
