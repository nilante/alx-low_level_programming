#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum
 * of all its parameters
 * @n: The number of n
 * @...: the variable
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list var;
unsigned int x, sum = 0;

va_start(var, n);

for (x = 0; x < n; x++)
sum += va_arg(var, int);

va_end(var);

return (sum);
}
