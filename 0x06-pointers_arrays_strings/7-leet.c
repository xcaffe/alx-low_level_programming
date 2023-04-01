#include "main.h"
/**
 * leet - encode string into 1337
 * @a: parameter
 * Return: value a
 */
char *leet(char *a)
{
	int b, c;
	char f1[] = "aAeEoOtTlL";
	char f2[] = "4433007711";

	for (b = 0; a[b] != '\0'; b++)
	{
		for (c = 0; c < 10; c++)
		{
			if (a[b] == f1[c])
			{
				a[b] = f2[c];
			}
		}
	}
	return (a);
}
