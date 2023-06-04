#include "main.h"
#include <stdio.h>
/**
 * *infinite_add - Write a function that adds two numbers.8
 * @n1: pointer to a string(first number)
 * @n2: pointer to a string(second number)
 * @r: a buffers that stores the result of the addition.
 * @size_r: size of the buffer (r).
 * Return: Always 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry = 0, j, i, k, sum = 0;

	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;
	if (len1 > size_r || len2 > size_r)
		return (0);
	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 1;
	while (i >= 0 && j >= 0)
	{
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		sum %= 10;
		r[k] = sum + '0';
		i--;
		j--;
		k--;
	}
	if (carry)
	{
		if (k < 0)
			return (NULL);
		r[k] = carry + '0';
	}
	else
	{
		k++;
	}
	for (i = 0; k <= size_r - 1; i++, k++)
		r[i] = r[k];
	r[i] = '\0';
	return (r);
}
