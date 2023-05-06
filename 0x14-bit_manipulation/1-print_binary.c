#include "main.h"

/**
 * print_binary - outputs the binary of a decimal number
 * @n: number to output in binary
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	int count = 0;
	unsigned long int to_change;

	for (i = 63; i >= 0; i--)
	{
		to_change = n >> i;

		if (to_change & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

