#include <stdlib.h>
#include "lists.h"

/**
 * list_len - counts elements in a list
 * @h: list
 * Return: number of elements in a list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
