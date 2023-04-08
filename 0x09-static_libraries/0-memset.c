#include "main.h"
/**
 * _memset - function sets the first count bytes of dest
 * to the value
 * @s: the memory area
 * @b: the constant byte
 * @n: the number of bytes
 * Return:S
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}

return (s);
}

