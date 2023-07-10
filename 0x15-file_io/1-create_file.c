#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int b;
	int c, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	b = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(b, text_content, len);

	if (b == -1 || c == -1)
	return (-1);
	close(b);
	return (1);
}
