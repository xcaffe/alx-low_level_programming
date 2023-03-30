#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: this is the destination string
 * @src: this is the source string
 * Return: the value should be dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

