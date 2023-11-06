#include "dog.h"
/**
 * init_dog - initialises struct dog
 * @d: new dog
 * @name: first member
 * @age: second member
 * @owner: third memeber
 * Description : initialising previously define dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

