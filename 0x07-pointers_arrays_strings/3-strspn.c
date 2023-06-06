#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length
 * of a prefix substring.
 * @s: pointer of the string
 * @accept: words to search for in s.
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	unsigned int i;
	int found;

	for (; *s != '\0'; s++)
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
	}
	return (count);
}
