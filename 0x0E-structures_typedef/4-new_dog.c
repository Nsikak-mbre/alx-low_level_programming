#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int a, name_len, owner_len;

	name_len = 0;
	while (name[name_len] != '\0')
	{
		name_len++;
	}

	owner_len = 0;
	while (owner[owner_len] != '\0')
	{
		owner_len++;
	}
	*newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = malloc(name_len + 1);
	newdog->owner = malloc(owner_len + 1);

	if (newdog->name == NULL ||newdog-> == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}

	for (a = 0; a <= name_len; a++)
	{
		newdog->name[a] = name[a];
	}

	for (a = 0; a<= owner_len; a++)
	{
		newdog->owner[a] = owner[a];
	}
	newdog->age = age;
	return (newdog);
}
