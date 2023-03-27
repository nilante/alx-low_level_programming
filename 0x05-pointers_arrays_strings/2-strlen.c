
#include "main.h"
/**
 * _strlen - return the length of a string
 * @sl: char to check
 * Description: Write a function that returns the length of a string
 * Return: 0
 */
int _strlen(char *sl)
{
	int a = 0;

	for (; *sl++;)
		a++;
	return (a);
}

