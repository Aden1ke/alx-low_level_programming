#include <stdio.h>
/**
 * main - a program that prints Hexadecimal(base 16)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nom;
	char letter;

	for (nom = 0; nom <= 9; nom++)
	{
		putchar(nom + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
