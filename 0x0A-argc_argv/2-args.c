#include <stdio.h>
/**
 * main - a program that prints the
 * number of arguments passed into it.
 * @argc: number of arguments
 * @argv: arguments inputed.
 * Return: 0.
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
