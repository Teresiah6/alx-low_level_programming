#include "main.h"
/**
 * *rot13 - entry point
 * @n - encoding string
 * Return: returns n
 */
char *rot13(char *n)
{
	int count = 0;
	int i;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(n + count) != '\0')
		{
			for (i = 0; i < 52; i++)
				{
					if (*(n + count) == alphabet[i])
						{
							*(n + count) = rot13[i];
							break;
						}
				}
			count++;
		}

	return (n);
}
