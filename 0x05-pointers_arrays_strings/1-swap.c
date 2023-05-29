#include "main.h"
#include <stdio.h>
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: pointer to value a.
 * @b: pointer to value b.
 */
void swap_int(int *a, int *b)
{
	int store = *a;
	*a = *b;
	*b = store;
}
