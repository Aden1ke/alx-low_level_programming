#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 * except  for  2 and 4
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int print;

	for (print = 0; print <= 9; print++)
	{
		if (print != 2 && print != 4)
			_putchar(print + '0');
	}
	_putchar('\n');
}
