#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 for a buffer
 * @file: file name for characters to be stored in buffer for
 * Return: pointer to created buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file -close file descriptors
 * @fd: file to be closed
 */

void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies content of file to another
 * @argc: arguments count
 * @argv: pointers to arguments
 * Return: 0 success
 *
 * Description: If argc is incorrect - exit code 97
 * If file does not exist - exit code 98
 * If file cannot close - exit code 100
 */

int main(int argc, char *argv[])
{
	int origin;
	int to;
	int r;
	int w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	origin = open(argv[1], O_RDONLY);
	r = read(origin, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (origin == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(origin, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(origin);
	close_file(to);

	return (0);
}
