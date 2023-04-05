#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: pointer variable
 * Return: no value
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%c", a[b][c]);
		}

		printf("\n");

	}
}
