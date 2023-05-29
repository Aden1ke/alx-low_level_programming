#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints a string, followed by a new line.
 * @a: pointer to a string.
 * @n: number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
