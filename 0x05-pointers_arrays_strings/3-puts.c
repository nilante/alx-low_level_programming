#include "main.h"
/**
 * _puts : Write a function that prints a string
 * @str: the string
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
