#include "main.h"

/**
 * create_file - creates a new file
 * @filename: pointer to file to be created
 * @text_content: pointer to string to be written on file
 * Return: 1 success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int w = 0;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_conent[len];)
			len++;
	}
	fd = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
