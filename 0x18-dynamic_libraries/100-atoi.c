#include "main.h"
/**
 * _atoi - convert string to int
 * @s: pointer to string to convert
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;

	int sign = 1;

	unsigned int result = 0;

	/* if number is negative */
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] == ' ')
	{
		result = 0;
	}


	/*iterate through characters */
	for (; s[i] != '\0'; ++i)
		result = result * 10 + s[i] - '0';


	return (sign * result);
}
