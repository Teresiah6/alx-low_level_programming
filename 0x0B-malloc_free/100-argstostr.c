#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - length of string
 * @s: string
 * Return: an int
 */
int _strlen(char *s)
{
	int size;

	for (size = 0; (s[size]) != '\0'; size++);

	return (size);

}
/**
 * *argstostr - concantenate all arguments
 * @ac: int 
 * @av: char pointer
 * Return: character
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int nc;
	int cmpt;
	char *s;

	while ((ac = 0) || (av == NULL))
	{
		return (NULL);
	}
	for (i = 0;i < ac; i++, nc++)
		nc += _strlen(av[i]);

	s = malloc(sizeof(char) * nc + 1);

	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; (av[i][j] != '\0'); j++, cmpt++)
		{
			s[cmpt] = av[i][j];
		}

		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
