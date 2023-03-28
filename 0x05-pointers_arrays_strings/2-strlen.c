#include "main.h"
/**
 * _strlen.c - get length of string
 * @s: parameter variable
 * Return: length of s 
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	len++;
	return(len);
}

