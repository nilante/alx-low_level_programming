#include "main.h"

/**
* print_rev -printing a string in reverse
* @str: the string to be printed in rev
*/

void print_rev(char *str)
{
	int i, n;

	n = 0;
	while (str[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
