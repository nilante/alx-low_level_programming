#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to concatenate to s1
 * Return: a
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	/**
	 * b : string length1 ,c: string length2
	 */
	 unsigned int x = 0, y = 0, b = 0,  c = 0;

	while (s1 && s1[b])
		b++;
	while (s2 && s2[c])
		c++;

	if (n < c)
		a = malloc(sizeof(char) * (b + n + 1));
	else
	a = malloc(sizeof(char) * (b + c + 1));

	if (!a)
		return (NULL);

	while (x < b)
	{
		a[x] = s1[x];
		x++;
	}

	while (n < c && x < (b + n))
		a[x++] = s2[y++];

	while (n >= c && x < (b + c))
		a[x++] = s2[y++];

a[x] = '\0';

	return (a);
}
