#include "3-calc.h"
/**
 * op_add - function that adds
 * @a: num 1
 * @b: num 2
 * Return: operation.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that subtract
 * @a: num 1
 * @b: num 2
 * Return: operation.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that multiples
 * @a: num 1
 * @b: num 2
 * Return: operation.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that divides
 * @a: num 1
 * @b: num 2
 * Return: operation.
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
 * op_mod - function that divides
 * @a: num 1
 * @b: num 2
 * Return: operation.
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
