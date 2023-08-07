#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a file
 * @filename: the file
 * @letters: number of letters to read and print
 * Return: 0 if fail and number of letters if success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, o, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(0, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	
	free(buffer);
	close(0);

	return (w);
}
