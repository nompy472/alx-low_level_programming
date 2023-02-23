#include "main.h"

/**
 * _isupper - Check if a letter is uppercase
 * @x: checked number
 * Return: 1 uppercase and 0 lowerscase
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
