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
 * *str_concat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int size = len1 + len2;
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
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	ptr[size] = '\0';
	return (ptr);
}
