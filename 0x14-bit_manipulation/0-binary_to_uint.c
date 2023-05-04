#include "main.h"
/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int
 * @b: the string
 * Return: the converted number, or 0
 * ifthere is one or more chars in the
 * string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int cn = 0;
	/*cn:converted number"*/

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x < '0' || b[x] > '1')
			return (0);
		cn = 2 * cn + (b[x] - '0');
	}

	return (cn);
}
