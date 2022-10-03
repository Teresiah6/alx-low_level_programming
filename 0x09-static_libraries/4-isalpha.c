#include "main.h"
/**
 * _isalpha: check if char is alphabet
 * @c: char to check ASCII
 * Return: zero success 1 not
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}
