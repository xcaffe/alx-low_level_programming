#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 * @a: parameter
 * @n: parameter
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i];
		else
			printf("%d, ", a[i];
	}
	print("\n");
}
