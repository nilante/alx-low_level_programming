#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number
 * @n: factorial number
 * Return:the factorial number
 */
int factorial(int n)

{
if (n < 0)

return (-1);

else if (n == 0)
return (1);

/* else return the factorial function */
return (n * factorial(n - 1));
}
