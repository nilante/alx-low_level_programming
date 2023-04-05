#include "main.h"
/**
 * _puts_recursion -Write a function that prints a string ;
 * @s: the string 
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_puts_recursion(s + 1);
	_putchar(*s);
	}

	else
	_putchar('\n');
}
