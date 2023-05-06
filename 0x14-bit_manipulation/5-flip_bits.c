#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * @n: first number
 * @m: second number
 * Return: no. of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j = 0;
	int count = 0;
	unsigned long int num;
	unsigned long int exclusive = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		num = exclusive >> j;
		if (num & 1)
			count++;
	}
	return (count);
}
