#include "main.h"
/**
 * print_alphabet_x10 : entry point
 *
 * Description: prints alphabet ten times
 *
 * return: always none
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;
	while (i < 10)
	{
		for ( c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			i++;

		}
			
	}

	_putchar ('\n');
}
