#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of file
 * @text_content: string
 * Return: 1 success, -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, i;
	int fwrite;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND | O_RDWR, 0664);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;

		fwrite = write(file, text_content, i);
		if (fwrite == -1)
			return (-1);
	}
	close(file);
	return (1);
}
