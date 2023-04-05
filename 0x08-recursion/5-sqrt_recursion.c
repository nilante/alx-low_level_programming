
#include "main.h"
/**
 * recursion - a function to calculate the root square
 * @x: the variable 1
 * @y: the variable 2
 * Return:the result
 */
int recursion(int x, int y)
{
if (x * x > y)
return (-1);
else if (x * x == y)
return (x);
return (recursion(x + 1, y));
}
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: square root of a number
 * Return: the square root
 */


int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (recursion(1,n));
}
