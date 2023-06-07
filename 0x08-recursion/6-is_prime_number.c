#include "main.h"
/**
 * check_prime - function that recursively check prime
 * @n: number to check
 * @i: current divisor to test
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}
/**
 * is_prime_number - function returns 1 if the integer is
 * prime number otherwise return 0.
 * @n: check if it is a prime number.
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (check_prime(n, 2));
}
