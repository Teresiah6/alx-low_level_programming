#include "main.h"
/**
 * print_last_digit - entry point
 *
 * @r: last digit of no. to be printed
 *
 * Return: always 0
 */
int print_last_digit(int r)
{
	r = r % 10;

	_putchar (r);

	return (r);

}
