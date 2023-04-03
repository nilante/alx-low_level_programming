#include "main.h"
/**
 * _memcpy - is used to copy a block of memory from a
 * location to another
 * @src: the memory area
 * @dest: where the memory area stored
 * @n: the number of bytes
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
