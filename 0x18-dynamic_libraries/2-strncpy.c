#include "main.h"
#include <stdio.h>
/**
 *  *_strncpy - a function that copies the string pointed to by src
 * @dest: pointer to a string.
 * @src: pointer to a string.
 * @n: maximum number of bytes from src to be copied
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
