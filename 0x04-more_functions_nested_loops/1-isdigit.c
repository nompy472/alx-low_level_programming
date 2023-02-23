#include "main.h"

/**
 * _isdigit - Check if character is a digit
 * @x: checked number
 * Return: 1 for digit and 0 for non digit
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
