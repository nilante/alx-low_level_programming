#include "main.h"
/**
 *_strcat - concatenates string2 to string1 and ends
 * the resulting string with the null character
 * @dest: input value
 * @src: input value
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int x;
int y;

x = 0;
while (dest[x] != '\0')
{
x++;
}
y = 0;
while (src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}

dest[x] = '\0';
return (dest);
}

