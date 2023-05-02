#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimension array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **mee = 0;
	int a, b = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (mee == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		mee[a] = malloc(sizeof(int) * width);

		if (mee[a] == NULL)
		{
			for (; a >= 0; a--)
				free(mee[a]);

			free(mee);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			mee[a][b] = 0;
	}
	return (mee);
}
