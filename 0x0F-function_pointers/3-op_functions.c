#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - sum of a and b
 * @a: first number
 * @b: second number
 * Return: 0
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract of a and b
 * @a: first number
 * @b: second number
 * Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply of a and b
 * @a: first number
 * @b: second number
 * Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide of a and b
 * @a: first number
 * @b: second number
 * Return: 0
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - remainder of the division of a and b
 * @a: first number
 * @b: second number
 * Return: 0
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
