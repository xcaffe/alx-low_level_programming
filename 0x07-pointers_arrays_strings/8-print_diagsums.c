#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - sum of the two diagonals
 * @a: an integer
 * @size: size
 * Return: no value
 */
void print_diagsums(int *a, int size)
{
	int b, c;
	int sumA = 0;
	int sumB = 0;

	for (b = 0; b <= (size * size); b = b + size + 1)
		sumA = sumA + a[b];
	for (c = size - 1; c <= (size * size) - size; c = c + size - 1)
	sumB = sumB + a[c];
	printf("%d, %d\n", sumA, sumB);
}

