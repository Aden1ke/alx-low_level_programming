#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints
 * sum of the two diagonals of a square matrix of integers.
 * @a: pointer to an array.
 * @size: length of array
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int result1 = 0;
	int result2 = 0;

	for (i = 0; i < size; i++)
	{
		result1 +=  a[i * size + i];
		result2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, ", result1);
	printf("%d\n", result2);
}
