#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - a function that draws a diagonal line
 * @n: number of times the character \ should be printed
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
}
