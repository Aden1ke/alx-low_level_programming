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
 * *argstostr - function that concatenates
 * all the arguments of your program..
 * @ac: length of agruments(av)
 * @av: arguments
 * Return: nothing.
 */
char *argstostr(int ac, char **av)
{
	int *ptr;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	ptr = malloc(ac * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		ptr[i] = av[i];
		_putchar('\n');
	}
	ptr[i] = '\0';
	return (ptr);
}
