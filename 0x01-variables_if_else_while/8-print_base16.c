#include <stdio.h>

/**
 * main - main function
 *
 * Return: value is 0
 */
int main(void)
{
	int i;
	char f;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (f = 'a' ; f <= 'f' ; f++)
		putchar(i);
	putchar('\n');
	return (0);
}
