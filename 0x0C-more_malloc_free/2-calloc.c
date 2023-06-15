#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - function that allocates memory for an array
 * using malloc.
 * @nmemb: number of elements.
 * @size: size of each element in bytes.
 * Return: Always 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
