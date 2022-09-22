rinclude "main.h"
/**
 * *_strcat - Entry point
 * @dest: pointer for string to be added to
 * @src: string to add
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	dest_length = 0;

	while (dest[i++])
		dest_length++;

	for (i = 0; src[i]; i++)
	{
		dest[dest_length++] = src[i];
	}

	return (dest);
}
