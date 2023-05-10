#include "main.h"
#include  <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to POSIX stdout.
 * @filename: a pointer to the name of the file
 * @letters: the number of letters thefunction should read and print
 * Return: if the function fails or filename is NULL -0
 * O/W - the actual number of bytes the function can read and print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(0);

	return (w);
}
