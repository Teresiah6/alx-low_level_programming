#include "main.h"
/**
 * int _strlen_recursion - return length of a string
 * @s: string whose length to return
 * return: length of @s
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if(*s)
	{
		len++;
		len += strlen_recursion(s + 1); 
	}




	return(len);
}
