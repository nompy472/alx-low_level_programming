#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character in standard output
 * @c: char to print
 * Return: 1 else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
