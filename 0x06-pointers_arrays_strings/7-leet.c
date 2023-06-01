#include "main.h"
#include <stdio.h>
/**
 * *leet - a function that encodes a string into 1337.
 * @str: pointer to a string.
 * Return: Always 0.
 */
char *leet(char *str)
{
	char let[] = "AEOTL";
	char rep[] = "43071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (str[i] == let[j] || str[i] == let[j] + 32)
			{
				str[i] = rep[j];
				break;
			}
		}
	}
	return (str);
}
