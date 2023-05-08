#include "main.h"

/**
 * append_text_to_file - append text at end of file
 * @filename: pointer to file name
 * @text_content: string to append
 * Return: 1 success else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0;
	int O = 0;
	int W = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	O = open(filename, O_WRONLY | O_APPEND);
	W = write(O, text_content, len);

	if (O == -1 || W == -1)
		return (-1);
	close(O);
	return (1);
}
