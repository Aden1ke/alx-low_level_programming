#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function that compares two strings.
 * @s1: pointer to the 1st string.
 * @s2: poniter to the 2nd string.
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
