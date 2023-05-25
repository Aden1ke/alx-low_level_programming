#include "main.h"
#include <stdio.h>
/**
 * print_line - a function that draws a straight line.
 * @n: number of times the character _ should be printed.
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
