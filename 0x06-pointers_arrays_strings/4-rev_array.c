#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array pointer to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = n - 1; i >= n / 2; i--)
	{
		b = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = b;
	}
}
