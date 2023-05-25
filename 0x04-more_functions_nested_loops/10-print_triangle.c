#include <stdio.h>
#include "main.h"
/**
 * print_triangle - a function that prints a triangle,.
 * @size: size of the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j;

	if (size == 0)
	{
		_putchar('\n');
	}
	for (i = 1; i >= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j + i <= size)
			{
				_putchar(' ');
			}
			_putchar('#');
		}
		_putchar('\n');
	}
}
