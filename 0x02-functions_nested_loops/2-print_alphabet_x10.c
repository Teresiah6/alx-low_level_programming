#include "main.h"
/**
 * print_alphabet_x10 : entry point of program that prints a-z X10
 *
 * Description: program prints alphabet ten times, void return type
 *
 * return: always none
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar('\n');
	}

}
