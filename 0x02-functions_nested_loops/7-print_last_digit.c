#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Write a function that prints the last digit of a number
 * @val: the value needed
 * Return: Always 0.
 */
int print_last_digit(int val)
{
	int last = val % 10;

	if (last < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last % 10);
}
