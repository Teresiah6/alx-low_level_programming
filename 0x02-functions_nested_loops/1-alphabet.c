#include "main.h"
/**
 * main - a function that prints teh aphabet in lowercase
 *
 * followed by a new line
 *
 * Description: prints alphabets in lowercase
 * 
 * Return: always 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);


	_putchar('\n');
}
