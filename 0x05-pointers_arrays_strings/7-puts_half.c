#include "main.h"
/**
 * _strlen - length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\n')
	{
		l++;
		s++;

	}
	return(l);
}

/**
 * puts_half - entry point
 * @str: 2nd half of the string to be printed
 * @n: if no. of char is odd n =(length-1)/2
 * Return: void
 */
void puts_half(char *str)
{
	int it;
	int l = _strlen(str);


	if ((l % 2) != 0)
	{
		it = ((l / 2) + 1);
	}
	else
	{
		it = (l / 2);
	}

	while (it < l)
	{
		_putchar(*(str+ it));
	}

	_putchar('\n');
}
