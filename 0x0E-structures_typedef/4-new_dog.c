#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates new dog
 * @name: dog's name.
 * @age: dog's age.
 * @owner: name of dog's owner
 * Return: a dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *new_dog;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char *) * i + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		new_dog->name[k] = name[k];
	}
	new_dog->name[k] = '\0';
	new_dog->age = age;
	new_dog->owner = malloc(sizeof(char *) * i + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k < j; k++)
	{
		new_dog->owner[k] = owner[k];
	}
	new_dog->owner[k] = '\0';
	return (new_dog);
}
