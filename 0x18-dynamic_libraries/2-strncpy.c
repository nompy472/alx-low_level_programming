#include "main.h"

/**
 *  _strncpy - Copies at most an inputted number
 *      of bytes from string src into dest
 *@dest: The buffer storing the string copy
 *@src: The source string
 *@n: The maximum number of bytes to copied from src
 *Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
