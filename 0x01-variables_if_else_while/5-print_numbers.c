#include <stdio.h>

/**
 * main - a program that prints the number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nom;

	for (nom = 0; nom <= 9; nom++)
	{
		printf("%d", nom);
	}
	putchar('\n');
	return (0);
}
