#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Description: prints alphabets in lower case
 *
 * Return: always void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);


	_putchar('\n');
}
