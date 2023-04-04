#include "main.h"
/**
 * _memcpy - Copies byte from one memory area to another memory area 
 * @b: constant byte
 * @s: pointed memory area
 * @n: bytes
 * Return: vlue of pointed area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		s[m] = b;
       return (s);
}       

