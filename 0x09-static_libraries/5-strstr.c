#include "main.h"
#include <stdio.h>
/**
 * *_strstr - function that locates a substring.
 * @haystack: pointer of the string
 * @needle: words to search for in s.
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
