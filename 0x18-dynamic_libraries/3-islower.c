#include "main.h"
#include <stdio.h>
/**
 * _islower - Write a function that checks for lowercase character.
 * @c:value to be checked.
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
