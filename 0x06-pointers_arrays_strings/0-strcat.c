rinclude "main.h"
/**
 * *_strcat - Entry point
 * @dest: pointer for string to be added to
 * @src: string to add
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int l1;
	int l2;
	int i;

	while (*src != '\0')
		l2++;

	while (*dest != '\0')
		l1++;

	for (i = 0; i <= l2; i++)
	{
		dest[l1+1] = src[i];
	}

//	_putchar(dest);

	return(dest);
}
