#include "main.h"
/**
 * _puts - entry point
 * @s: char to put
 * return: void
 */
void _puts(char *s)
{
	int i = 0;
	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
