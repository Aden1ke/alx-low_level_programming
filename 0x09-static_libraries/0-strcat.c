#include "main.h"
#include <stdio.h>
/**
 * *_strcat - function that concatenates two strings.
 * @dest: pointer to a string.
 * @src: pointer to a string.l
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
		;
	for (len2 = 0; src[len2] != '\0'; len2++)
	{
		dest[len1 + len2] = src[len2];
	}
	dest[len1 + len2] = '\0';
	return (dest);
}
