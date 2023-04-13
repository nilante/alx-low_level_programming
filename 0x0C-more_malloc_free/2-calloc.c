#include <stdlib.h>
#include "main.h"

/**
 * _memset - sets the first count bytes of dest 
 * to the value c
 * @s: the string
 * @b: char to copy
 * @n: the variable
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - a function that allocates memory for an array,
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: a
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);

    a = malloc(size * nmemb);

if (a == NULL)
		return (NULL);

	_memset(a, 0, nmemb * size);

	return (a);
}
