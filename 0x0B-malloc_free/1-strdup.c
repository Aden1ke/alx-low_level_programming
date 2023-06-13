#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - a function that returns the length of a string.
 *@s: pointer to a string.
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
/**
 * *_strdup - a function that returns
 * a pointer to a newly allocated space in memory.
 * @str: string to dupicate.
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str);
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
