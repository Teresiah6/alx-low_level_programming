#include "main.h"
/**
 * print_rev - entry point
 * @s: string to be inputted
 * Return: void
 */
void print_rev(char *s)
{
	int start =0;
	int end;
	int b;

	for (i = 0; s[i] != '\0'; i++)
	{
		start++;
	}
	for (b = (start -1); b >= 0; b--)
	{
		_putchar(s[b]);
	}

	_putchar('\n');

}
