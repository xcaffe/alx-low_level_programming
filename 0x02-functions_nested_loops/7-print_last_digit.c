#include "main.h"

/**
 * print_last_digit - funtion of the program
 * @n: parameter to print
 * Return: Value i
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n < 0)
		i = -1;
	return (i);
}

