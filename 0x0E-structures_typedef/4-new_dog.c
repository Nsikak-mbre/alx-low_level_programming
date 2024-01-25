#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dogs name
 * @age: dogs age
 * @owner: owner
 * Return: 0 on success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int i, tag, newOwner;

	if (!(name) || !(owner) || name[0] == '\0' || owner[0] == '\0')
		return (NULL);
	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (tag = 0; tag[name]; tag++)
		;
	for (newOwner = 0; owner[newOwner]; newOwner++)
		;
	ptr->name = malloc(tag + 1);
	ptr->owner = malloc(newOwner + 1);

	if (!(ptr->name) || !(ptr->owner))
	{
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < tag; i++)
		ptr->name[i] = name[i];
	ptr->name[i] = '\0';

	ptr->age = age;

	for (i = 0; i < newOwner; i++)
		ptr->owner[i] = owner[i];
	ptr->owner[i] = '\0';
	return (ptr);
}



