#include "main.h"
#include <stdio.h>
/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int print;

	for (print = 0; print <= 9; print++)
	{
		_putchar(print + '0');
	}
	_putchar('\n');
}
