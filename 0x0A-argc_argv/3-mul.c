#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments.
 * @argv: arguments inputed.
 * Return: 0n success 1.
 */
int main(int argc, char *argv[])
{
	int first;
	int second;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	first = atoi(argv[1]);
	second = atoi(argv[2]);
	printf("%d\n", first * second);
	return (0);
}
