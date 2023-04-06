#include "main.h"
int check_prime_number(int n, int i);
/**
 * is_prime_number - returns prime number
 * @n: the number to be checked
 * Return: integer value
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime_number(n, n - 1));
}
/**
 * check_prime_number - returns prime number
 * @n: the number to be checked
 * @i: iterator
 * Return: 1 for prime or 0 composite
 */
int check_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime_number(n, i - 1));
}
