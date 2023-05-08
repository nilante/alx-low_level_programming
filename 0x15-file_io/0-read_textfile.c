#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- a function that reads a text
 * file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: number of letters
 * Return: returns the actual number of
 * letters itcouldread and print
 * if the file can not be opened or read,
 * return 0
 * if filename is NULL return 0
 * if write fails or does not write
 * the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *st;
	/*st:size of text*/
	ssize_t file;
	ssize_t x;
	ssize_t y;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	st = malloc(sizeof(char) * letters);
x = read(file, st, letters);
y = write(STDOUT_FILENO, st, x);

	free(st);
	close(file);
	return (y);
}
