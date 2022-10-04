#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup -pointer to new string
 * @str -pointer to string
 * Return: characters
 */
char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *m;


/*does string have anything*/
	if (str == NULL)
	{
		return (NULL);
	}

/*increase size of string if end is not reached*/
	for (; str[size] != '\0'; size++);
	return (str);

	/*string allocation*/
	m = malloc(size * sizeof(*str) + 1);

	if(m == 0)
		return (NULL);
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}

	return (m);
}
