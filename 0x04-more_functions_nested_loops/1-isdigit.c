#include "main.h"

/**
 * _isupper - function checks upper character.
 * @c: input variable
 * Return: 1 or 0 should be the value.
 */
int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
        return (1);
        else
        return (0);
}
