#include "main.h"
/**
 * main - a function that prints teh aphabet in lowercase
 *
 * followed by a new line
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);


	_putchar('\n');

	return(0);
}
