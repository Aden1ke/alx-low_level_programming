#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: pointer to a string.
 * @src: pointer to a string.
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = _strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
