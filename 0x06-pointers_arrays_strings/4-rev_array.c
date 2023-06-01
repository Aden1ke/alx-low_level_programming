#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverses an array.
 *@a: pointer to a array.
 *@n: length of array
 */
void reverse_array(int *a, int n)
{
	int i;
	int store;

	for (i = 0; i < n / 2; i++)
	{
		store = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = store;
	}
}
