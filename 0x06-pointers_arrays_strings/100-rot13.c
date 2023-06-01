#include "main.h"
#include <stdio.h>
/**
 * *rot13 - a function that encodes a string using rot13.
 * @str: pointer to a string
 * Return: Always 0.
 */
char *rot13(char *str)
{
	char let[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rep[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (str[i] == let[j])
			{
				str[i] = rep[j];
				break;
			}
		}
	}
	return (str);
}
