#include "main.h"
/**
 * *string_toupper - entry point
 * @s: string to convert
 * Return: return char
 */
#define MAX_SIZE 100

char *string_toupper(char *s)
{
	char str[MAX_SIZE];
	char *s = str;
	int i;
	
	while(*s) 
		    {
			            *s = (*s > 'a' && *s <= 'z') ? *s-32 : *s;
				            s++;
					        }
	_putchar(str);
	return (str);
}
