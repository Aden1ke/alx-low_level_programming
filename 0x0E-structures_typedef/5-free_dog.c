#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees dogs.
 * @d: pointer to the struct
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
