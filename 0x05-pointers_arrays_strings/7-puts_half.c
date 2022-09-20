#include "main.h"
/**
 * puts_half - entry point
 * @str: 2nd half of the string to be printed
 * @n: if no. of char is odd n =(length-1)/2
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int length = 0;
	int n;

	for (i = 0; str != '\0'; i++)
	{
		length++;

	}

	n = (length / 2);

	if ((length % 2) == 1)
	{
		n = ((length + 1) / 2);
	}

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
