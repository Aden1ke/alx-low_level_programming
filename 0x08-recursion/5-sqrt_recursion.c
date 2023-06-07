#include "main.h"
/**
 * sqrt_help - function to find the square root recursively
 * @n: number for which to find the square root
 * @i: numbers used to check square root.
 * Return: square root of n,or -1.
 */
int sqrt_help(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_help(n, i + 1));
	}
}
/**
 * _sqrt_recursion - function that returns the
 * natural square root of a number.
 * @n: number provided
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (sqrt_help(n, 0));
}
