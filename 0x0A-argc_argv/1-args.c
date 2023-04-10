#include <stdio.h>
#include "main.h"
/**
 * main - prints name
 * @argc: count of the argument
 * @argv: array of pointer to the string
 * comment: char *argv[] is equivalent to char **argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
