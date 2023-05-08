#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints to standard output
 * @filename: file to read text from
 * @letters: text to be read
 * Return: 0 if fails otherwise w
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t t;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
