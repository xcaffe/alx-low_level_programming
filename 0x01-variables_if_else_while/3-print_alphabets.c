#include <stdio.h>

/**
 * main - main function
 *
 * Return: value is 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	return (0);
}
