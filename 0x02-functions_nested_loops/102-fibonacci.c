#include "main.h"
/**
 * main - entry point 
 *
 * @c: counting 
 *
 * @s: sum
 *
 * Return: Always o
 */
int main(void)
{
	int c; 
	int f1 = 0;
	int f2 = 1; 
	int s;

	for ( c = 0; c < 50; c++)
	{
		s = f1 + f2;
		_putchar(s);

		f1 = f2;
		f2 = s;

		if (c == 49)
			_putchar ('\n');
		else
			_putchar (',');
	}
	return (0);
}
