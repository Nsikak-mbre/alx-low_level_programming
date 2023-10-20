#include "dog.h"

/**
 * init_dog - initializing dog
 * @d: member
 * @name: memebr
 * @age: member
 * @owner: member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}

