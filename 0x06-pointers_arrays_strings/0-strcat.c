rinclude "main.h"
/**
 * *_strcat - Entry point
 * @dest: pointer for string to be added to
 * @src: string to add
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n = -1;

	for (i = 0; dest[i] != '\0'; i++);

	do
	{
		n++;
		dest[i] = src[n];
		i++;

	} while (src[a] != '\0');

	return (dest);
}
