#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - length of string 
 * @s: string
 * Return: int
 */
unsigned int _strlen(char *s)
{
	unsigned int size;

	for (size = 0; (s[size]) != '\0')
		;
	return (size);
}
/**
 * *string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes  of string
 * Return: char of strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *m;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	if (n < _strlen(s2))
		m = malloc(_strlen(s1) + n * sizeof(char) + 1);
	else 
		 m = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (m == 0)
		return (NULL)


	for (i = 0; (s1[i]) != '\0'; i++)
		m[i] = s1[i];

	for (j = 0; (s2[j] != '\0') && (j < n); i++, j++)
		m[i] = s2[j];

	m[i] = '\0';

	return (m);
}
