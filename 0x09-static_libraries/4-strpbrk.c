#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string occurrence
 * @accept: input
 * Return: value null or return a pointer that matches one of the byte
 */
char *_strpbrk(char *s, char *accept)
{
	return strpbrk(s, accept);
}
