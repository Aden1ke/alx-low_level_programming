#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: Pointer to a string.
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
	_print_rev_recursion(s + 1);
	i++;
	}
	if (i > 0)
	{
		_putchar(s[i - 1]);
	}
}
