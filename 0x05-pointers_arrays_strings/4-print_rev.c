#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 *@s: pointer to a string.
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
