#include "main.h"
#include <stdio.h>
/**
 * *_memset - a function that fills memory
 * with a constant byte
 * @s: pointer to the buffer
 * @b: value to exchange with the one in the buffer
 * @n: size of buffer
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
