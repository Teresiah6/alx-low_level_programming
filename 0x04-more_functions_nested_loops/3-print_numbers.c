#include "main.h"
/**
 * print_numbers - entry point
 *
 * Description: prints numbers 0 to 9
 *
 * Return: always void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		_putchar (i);
	}
		_putchar ('\n');
}
