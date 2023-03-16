#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * malloc_checked - allocate memoey
 * @b: number of bytes to allocate
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
