#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 -  a function that prints 10 times the alphabet,
 * in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char sletter;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (sletter = 'a'; sletter <= 'z'; sletter++)
		{
			putchar(sletter);
		}
		putchar('\n');
	}
}
