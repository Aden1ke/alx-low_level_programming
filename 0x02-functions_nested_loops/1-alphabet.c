#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - a program that prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char sletter;

	for (sletter = 'a'; sletter <= 'z'; sletter++)
	{
		putchar(sletter);
	}
	putchar('\n');
}
