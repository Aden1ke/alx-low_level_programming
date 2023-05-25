#include "main.h"
#include <stdio.h>
/**
 * print_number - a function that prints an integer.
 * @n: integer to be printed
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n <= 0 || n >= 0)
	{
		if (n >= 1000)
		{
			_putchar((n / 1000) + '0');
			_putchar((n / 100) % 10 + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar((n % 10) + '0');
		}
		else if (n >= 100)
		{
			_putchar((n / 100) + '0');
			_putchar((n / 10) % 10 + '0');
			_putchar((n % 10) + '0');
		}
		else if (n >= 10)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar(n + '0');
		}
	}
}
