#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free's allocated mem
 * @d: struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
