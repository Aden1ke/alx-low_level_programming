#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @val:the value converted
 * Return: Always 0.
 */
int _abs(int val)
{
	if (val >= 0)
	{
		return (val);
	}
	else
		return (-val);
}
