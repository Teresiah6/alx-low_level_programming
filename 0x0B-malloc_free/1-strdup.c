#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_strdup -pointer to new string
 * @str -pointer to string
 * Return: characters
 */
char *_strdup(char *str)
{
	int i;
	int size;
	char *m;


/*does string have anything*/
	if (str == NULL)
	{
		return (NULL);
	}

/*increase size of string if end is not reached*/
	for (size = 0; str[size] != '\0'; size++);
	return (str);

	/*string allocation*/
	m = malloc(size * sizeof(*str) + 1);

	if(m == 0)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
			m[i] = str[i];
	}

	return (m);
}
