#include "main.h"
/**
 * swap_int - Swap two integers
 * @a: pointer variable
 * @b: pointer variable
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

