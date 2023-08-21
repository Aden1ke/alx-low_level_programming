#include "main.h"
#include <stdio.h>
/**
 * *_strchr - a function that locates
 * a character in a string.
 * @s: pointer to a string
 * @c: character to search for
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
			return (NULL);
}
