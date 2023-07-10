#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads and prints number of letters in POSIX standard output
 * @filename: text file to be read from
 * @letters: numbers of letters it should read and print
 * Return: 0 if filename is 0 & fails or not write expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bay;
	ssize_t a, b, c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	bay = malloc(sizeof(char) * letters);
	c = read(a, bay, letters);
	b = write(STDOUT_FILENO, bay, c);

	free(bay);
	close(a);
	return (b);
}
