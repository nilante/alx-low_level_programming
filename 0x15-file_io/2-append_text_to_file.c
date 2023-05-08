#include "main.h"
/**
 * append_text_to_file - a function that appends
 * text at the end of a file
 * @filename: the name of the file.
 * @text_content: the content of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file, x, y = 0;

if (filename == NULL)
	return (-1);

if (text_content != NULL)
{
for (y = 0; text_content[y];)
y++;
}

file = open(filename, O_WRONLY | O_APPEND);
x = write(file, text_content, y);

	if (file == -1 || x == -1)
		return (-1);

	close(file);

	return (1);
}
