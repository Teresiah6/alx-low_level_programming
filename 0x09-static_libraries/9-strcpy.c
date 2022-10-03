#include "main.h"
/**
 * *_strcpy - copy string to src
 * @dest: destination
 * src: source
 * Return: char pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
		int i = -1;

			do {
						i++;
								dest[i] = src[i];
									} while (src[i] != '\0');

				return (dest);
}
