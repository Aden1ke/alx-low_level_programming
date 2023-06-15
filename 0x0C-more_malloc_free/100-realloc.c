#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - function that reallocates a memory block
 * @old_size: old length of allocated
 * @new_size: new allocated memory
 * @ptr: name of allocated memory
 * Return: Always 0.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr = realloc(ptr, new_size * sizeof(int));
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
