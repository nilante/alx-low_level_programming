#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the opcodes
 * of its own main function
 * @argc: the number of arguments on the command
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int number_of_bytes, x;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (x = 0; x < number_of_bytes; x++)
	{
		if (x == number_of_bytes - 1)
		{
			printf("%02hhx\n", arr[x]);
			break;
		}
