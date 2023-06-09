#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - a function that copies memory area.
 * @src: pointer to copy(source pointer)
 * @dest: pointer to paste to(destination pointer)
 * @n: size of bytes to copy
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
