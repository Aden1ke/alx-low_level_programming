#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - a function that prints half of a string.
 *@str: pointer to a string.
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		for (i = len / 2; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (len + 1) / 2; i <= len - 1; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
