#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments.
 * @argv: arguments inputed.
 * Return: 0n success 1.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", op(a, b));
	return (0);
}
