#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - Allocates bytes to a buffer (1024)
 * @file: file name where buffer is storing char
 * Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(char *file);

void close_file(int fd);
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes file descriptors
 * @f_t: file descriptor
 */
void close_file(int f_t)
{
	int a;

	a = close(f_t);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_t);
		exit(100);
	}
}

/**
 * main - Copies from one file to another file
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, re, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	re = read(fd_from, buffer, 1024);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fd_from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(fd_to, buffer, re);
		if (fd_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		re = read(fd_from, buffer, 1024);
		fd_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);

	free(buffer);
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
