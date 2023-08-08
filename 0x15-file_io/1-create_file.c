#include "main.h"
/**
 * create_file - this function creates file
 * @filename: this is the name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int a;
	int b, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, len);

	if (a == -1 || b == -1)
		return (-1);
	close(a);
	return (1);
}
