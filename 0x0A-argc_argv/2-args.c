#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: count of the argument
 * @argv: array of pointer to the string
 * comment: char *argv[] is equivalent to char **argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
