#include "main.h"
/**
 * main - a function that prints teh aphabet in lowercase
 *
 * Description: print_alphabet() voidtype returns void
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
