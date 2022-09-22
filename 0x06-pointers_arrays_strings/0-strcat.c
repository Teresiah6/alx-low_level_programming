rinclude "main.h"
/**
 * *_strcat - Entry point
 * @dest: pointer for string to be added to
 * @src: string to add
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int l2 = -1;
	int i;

	for (i = 0; dest[i] != '\0'; i++);
	
	do{
		l2++;
		dest[i] = src[l2];
		i++;
	} while (src[l2] != '\0';

	return(dest);
}
