#include "main.h"
/**
 * print_binary - print binary rep of num
 * @n: the num
 * return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1 << 31; i > 0; i = i / 2)
		(n & i) ? _putchar('1') : _putchar('0');
}
