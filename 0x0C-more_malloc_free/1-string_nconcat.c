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
 * *string_nconcat - function that concatenates two string
 * @s1: first string.
 * @s2: second string.
 * @n: length of character in s2 to copy
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	char *ptr;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= len2)
	{
		n = len2;
	}
	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < (int) n; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	ptr[len1 + i] = '\0';
	return (ptr);
}
