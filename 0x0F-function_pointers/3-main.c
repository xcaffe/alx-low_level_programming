#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - reult of simple operations
 * @argc: number of argument
 * @argv: array of poiner argument
 * Return: 0
 */
int main(int _attribute_((_unused_)) argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exist(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exist(99);
	}

	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exist(100);
	}

	print ("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
