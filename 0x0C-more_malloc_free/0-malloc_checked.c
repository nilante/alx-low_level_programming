#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates memory
 * @b: the variable
 * Return: the value 98
 */
void *malloc_checked(unsigned int b)
{
void *a;
a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
