#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not
 * be written, write “fails”, )
 */
int create_file(const char *filename, char *text_content)
{
	int file, x, y = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (y = 0; text_content[y];)
			y++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
x = write(file, text_content, y);

	if (file == -1 || x == -1)
		return (-1);

	close(file);

	return (1);
}
