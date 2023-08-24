#include "main.h"

/**
 * _isalpha - print function for alphabet
 * @c: paramenter to print
 * Return: value should be 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
