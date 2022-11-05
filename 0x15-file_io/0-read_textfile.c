#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read text and print it to POSIX
 * @filename: file 
 * @letters: number of letters to print
 * Return: actual numberof letters to read & print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fl, fread,fwrite;
	char *ttlsize;

	ttlsize = malloc(sizeof(char) *letters);

	if (ttlsize == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fl = open (filename, O_RDONLY);
	if (fl == -1)
		return (0);
	fread = read(fl, ttlsize, letters);
	if (fread == -1)
		return (0);
	fwrite = write(STDOUT_FILENO, ttlsize, fread);

	if (fwrite == -1)
		return (0);

	close(file);
	free(ttlsize);
	return (fwrite);
}
