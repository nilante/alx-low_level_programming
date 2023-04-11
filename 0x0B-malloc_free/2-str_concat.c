#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: the string 1
 * @s2: the string 2
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cots;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	cots = malloc(sizeof(char) * (x + y + 1));

	if (cots == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		cots[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		cots[x] = s2[y];
		x++, y++;
	}
	cots[x] = '\0';
	return (cots);
}
