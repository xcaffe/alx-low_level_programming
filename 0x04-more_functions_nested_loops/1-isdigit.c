#include "main.h"

/**
 * _isdigit - function checks for a digit.
 * @c: input variable
 * Return: 1 or 0 should be the value.
 */
int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
        return (1);
        else
        return (0);
}
