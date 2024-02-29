#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -  frees allocated space
 * @d - allocated space
 * Return: 0 on success
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
