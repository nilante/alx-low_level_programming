#include "main.h"
/**
 * flip_bits - a function that returns the number
 * of bits you would need to flip to get
 * from one number to another
 * @n: the variable of number 1
 * @m: the variable of number 1
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y = 0;
	unsigned long int z;
	unsigned long int t = n ^ m;

	for (x = 48; x >= 0; x--)
	{
		z = t >> x;
		if (z & 1)
			y++;
	}

	return (y);
}
