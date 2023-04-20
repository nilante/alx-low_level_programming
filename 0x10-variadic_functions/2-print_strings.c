#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function.
 * @...: the variable
 */

	void print_strings(const char *separator, const unsigned int n, ...)
	{
		va_list strings;
		char *s;
		unsigned int x;


		va_start(strings, n);


		for (x = 0; x < n; x++)
		{
		s = va_arg(strings, char *);


			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);


			if (x != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(strings);
	}
