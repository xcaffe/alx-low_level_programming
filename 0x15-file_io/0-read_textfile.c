#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read a text file and prints it to the POSIX standard output
 * @filename: text file
 * @letters: number of letters
 * Return: 0 or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fay;
	ssize_t a, b, c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	fay = malloc(sizeof(char) * letters);
	c = read(a, fay, letters);
	b = write(STDOUT_FILENO, fay, c);

	free(fay);
	close(a);
	return (b);
}
