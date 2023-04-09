  #include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>
	#include <string.h>
	/**
	 * positive_numbers - a program that adds positive numbers.
	 * @str: the string
	 * Return: 0
	 */
	int positive_numbers(char *str)
	{
		unsigned int count;
		count = 0;
		while (count < strlen(str)) 
		{
    if (!isdigit(str[count])) 
	{
	return (0);
	}
	count++;
	}
		return (1);
	}
	/**
	 * main - Print the name of the program
	 * @argc: Count arguments
	 * @argv: Arguments
	 * Return: 0
	 */
	int main(int argc, char *argv[])
	{
		int count;
		int str_to_int;
		int sum = 0;
		count = 1;
		while (count < argc) 
		{
			if (positive_numbers(argv[count]))
			{
				str_to_int = atoi(argv[count]);
				sum += str_to_int;
			}
			/**
			 * If one of the number contains symbols that are not digits, 
			 * print Error, followed by a new line, and return 1
			 */
			else
			{
				printf("Error\n");
				return (1);
			}
			count++;
		}
		printf("%d\n", sum); 
		return (0);
	}
