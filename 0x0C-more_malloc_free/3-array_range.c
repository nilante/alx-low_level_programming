#include <stdlib.h>
#include "main.h"
/**
 * array_range - a function that creates an array of integers
 * @min: minimum  values 
 * @max: maximum  values 
 * Return:NULL
 */
int *array_range(int min, int max)
{
	int *a;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		a[i] = min++;

	return (a);
}
