#include "main.h"
#include <stdio.h>
/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c:value to be checked.
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
