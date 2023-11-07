#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: New dog's name
 * @age: New dog's age
 * @owner: Dod's owner
 * Return: New-dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int count, dog_name, dog_owner;

	dog = malloc(sizeof(*dog));
	if (dog == NULL || !(name) || !(owner))
	{
		free(dog);
		return (NULL);
	}
	for (dog_name = 0; name[dog_name]; dog_name++)
		;
	for (dog_owner = 0; owner[dog_owner]; dog_owner++)
		;
	dog->name = malloc(dog_name + 1);
	dog->owner = malloc(dog_owner + 1);

	if (!(dog->name) || !(dog->owner))

	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (count = 0; count < dog_name; count++)
		dog->name[count] = name[count];
	dog->name[count] = '\0';

	dog->age = age;

	for (count = 0; count < dog_owner; count++)
		dog->owner[count] = owner[count];
	dog->owner[count] = '\0';
	return (dog);
}


