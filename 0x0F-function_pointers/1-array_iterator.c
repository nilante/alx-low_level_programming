#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array
 * @array: array
 * @size:   the size of the array
 * @action: is a pointer to the function you need to use
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
