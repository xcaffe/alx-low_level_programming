#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the number
 * @y: raised power
 * Return: value 0 or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
