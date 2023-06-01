#include "main.h"
#include <stdio.h>
/**
 * *cap_string - function that changes
 * all lowercase letters of a string to uppercase.
 * @str: pointer to string.
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i, j;
	char diff[] = "\t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		for (j = 0; diff[j] != '\0'; j++)
		{
			if (str[i] == diff[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
