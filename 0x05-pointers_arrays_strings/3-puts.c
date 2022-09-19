#include "main.h"
/**
 * _puts: entry point
 *
 * Return: void
 */
void _puts(char *str)
{
	int c;
	char str[];
	c = sizeof(str);
	_putchar(*str);
	_putchar('\n');
}
