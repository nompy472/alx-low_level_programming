#include "main.h"

/**
 * more_numbers - 10 times the numbers, from 0 to 14, followed by a new line
 * Return: 10 lines
 */

void more_numbers(void)
{
	int n, x;

	for (n = 0; n < 10; n++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
