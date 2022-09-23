#include "main.h"
/**
 * *string_toupper - entry point
 * @str: string to convert
 * Return: return char
 */
char *string_toupper(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'z'  && str[i] >= 'a')
		{
			str[i] -= 32;
		}

	}
	_putchar(str);
	return (str);
}
