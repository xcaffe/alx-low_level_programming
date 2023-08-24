#include "main.h"
/**
 * _memcpy - Copies byte from one memory area to another memory area
 * @dest: memory destination area
 * @src: memory source area
 * @n: bytes
 * Return: value dest source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		dest[m] = src[m];
	return (dest);
}



